#ifndef inventory_h
#define inventory_h
#include <iostream>
#include <iomanip>
#include <string>

struct Item
{
    std::string name;
    int quantity;
    float cost;
};

struct Purchase
{
    std::string name;
    int quantity;
};

const int MAX_SIZE = 50;
const int PURCHASE_SIZE = 4;

namespace inventory
{
    class ManageInventory
    {
    public:
        ManageInventory() : count{0}, p_pInventoryItems {new Item*[size]} { }
        ManageInventory(int size) : size{size}, count{0}, p_pInventoryItems {new Item*[size]}{}
        ~ManageInventory();
        ManageInventory(const ManageInventory& t);
        // : size{t.size} , count{t.count}, p_pInventoryItems {new Item*[t.size]}{}
        void addItem(std::string name, int quantity, float cost);
        void purchase(Purchase purchase[]);
        void printInventory();
    private:
        int size {MAX_SIZE};
        int count;
        Item **p_pInventoryItems;
    };
}

#endif