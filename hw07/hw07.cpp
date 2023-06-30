#include <iostream>
#include <iomanip>
#include <string>
#include "inventory.h"
using namespace inventory;

int main()
{
    std::string Name{""};
    Purchase purchases[PURCHASE_SIZE];
    ManageInventory Inventory{5};
    ManageInventory Inventory2(Inventory);
    int num{0};

    Inventory.addItem("Nike Basketball Shoes", 22, 145.99);
    Inventory.addItem("Under Armour T-Shirt", 33, 29.99);
    Inventory.addItem("Brooks running shoes", 11, 111.44);
    Inventory.addItem("Asics running shoes", 20, 165.88);
    Inventory.addItem("Nike shorts", 77, 45.77);

    std::cout << "Inventory list before Marks purchases: " << std::endl;
    Inventory.printInventory();
    std::cout << "\n*****************************************************************************\n";

    std::cout << "Please input the names of the items you would like to purchase. " << std::endl;

    for (int i = 0; i < PURCHASE_SIZE; i++)
    {
        std::cout << "Item #: " << (i+1) << std::endl;
        std::cout << "Name: ";
        std::getline(std::cin,Name);
        purchases[i].name = Name;
    }
    std::cout << std::endl;

    std::cout << "Plese input the quantity of items you would like to purchase. " << std::endl;
    
    for(int i = 0; i < PURCHASE_SIZE; i++)
    {
        std::cout << "How many of " << purchases[i].name << " would you like to purchase: ";
        std::cin >> num;
        purchases[i].quantity = num;
    }
    
    std::cout << "\n*****************************************************************************";
    std::cout << "\nPRINTING RECIEPT" << std::endl;
    std::cout << "\n*****************************************************************************";
    Inventory.purchase(purchases);

    std::cout << "\n-----------------------------------------------------------------------------";
    std::cout << "\nMarks Inventory after purchases" << std::endl;
    Inventory.printInventory();

    std::cout << "\n*****************************************************************************";
    std::cout << "\nCopy of original inventory using copy constructor." << std::endl;
    Inventory2.printInventory();
    std::cout << std::endl;


    return 0;
}