#include "inventory.h"
using namespace inventory;

void ManageInventory::addItem(std::string name, int quantity, float cost)
{
    p_pInventoryItems[count] = new Item;
    p_pInventoryItems[count]->name = name;
    p_pInventoryItems[count]->quantity = quantity;
    p_pInventoryItems[count]->cost = cost;
    count++;
}
ManageInventory::~ManageInventory()
{
    for (int i = 0; i < count + 1; i++)
    {
        delete p_pInventoryItems[count];
    }
}
void ManageInventory::purchase(Purchase purchase[])
{
    std::cout << std::endl;
    int i{0};
    int j{0};
    bool find;
    float total{0};            //Total after all purchases
    float sum{0};              //Total after individual purchase

    for (j = 0; j < purchase->quantity; j++)
    {
        find = false;

        while (i < count && !find)
        {
            if (p_pInventoryItems[i]->name == purchase[i].name)
            {
                find = true;
                sum = 0;

                p_pInventoryItems[i]->quantity -= purchase[i].quantity;
                sum = purchase[i].quantity * p_pInventoryItems[i]->cost;
                total += (purchase[i].quantity * p_pInventoryItems[i]->cost);

                std::cout << "\nName: "
                      << p_pInventoryItems[i]->name
                      << "\nQuantity: "
                      << p_pInventoryItems[i]->quantity 
                      << "\nCost per item: "
                      << p_pInventoryItems[i]->cost
                      << "\nSum: $"
                      << sum;
            }   else 
                {
                i++;
                }
        }
    }
    std::cout << "\nPrinting reciept: " << std::endl;
    std::cout << "SUB-TOTAL: $" << total << std::endl;
    std::cout << "TOTAL: $" << (total * 8.25) << std::endl;
    std::cout << "\n*****************************************************************************" << std::endl;


}

ManageInventory::ManageInventory(const ManageInventory& t) : size(t.size),
                                                            count(t.count),
                                                            p_pInventoryItems{new Item*[t.size]}
{
    for (int i = 0; i < count; i++)
    {
        p_pInventoryItems[i] = new Item{*t.p_pInventoryItems[i]};
    }

}
void ManageInventory::printInventory()
{   
        std::cout << "\n*****************************************************************************";
    for (int i = 0; i < count; i++)
    {
        std::cout << "\nName: ";
        std::cout << p_pInventoryItems[i]->name;
        std::cout << "\nQuantity: " << p_pInventoryItems[i]->quantity;
        std::cout << "\nPrice: $" << p_pInventoryItems[i]->cost;
    }
}


