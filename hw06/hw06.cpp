/***************************************************************
*   AUTHOR              : ESSA BULOUSHI
*   Assignemt #6        : Recursive
*   Class               : CS1C
*   Section             : Mon-Thurs 3-5:20
*   Due Date            : 06/26/23
****************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
#include "recursive.h"
#include "iterative.h"
using namespace std;
//Essa Buloushi                 CS1C
//
/**************************************************************
 * RECURSIVE
 * ------------------------------------------------------------
 * This program uses recursion to flip the order of 
 * an inputted string
 * ------------------------------------------------------------
 * INPUTS
 *  string[] myString  = "abcdef"
 * 
 *  OUTPUTS
 *  Reordered version string
 *
 * * ************************************************************/

int main()
{
          cout << "**********************************************************\n";
    cout << "   Programmed by   : Essa Buloushi\n";
    cout << "   CS1C            : Mon-Thurs:3-5:20\n";
    cout << "   HW 06           : Recursive\n ";
    cout << "**********************************************************\n";
   
   //Created a string array to use values more efficiently since changing by referecne is neccessary
    string myStrings[] = {
        "abcdefghijklmnopqrstuvwxyz",
        "abcdefghijklmnopqrstuvwxyz",
        "abcdefghijklmnopqrstuvwxyz",
        "abcdefghijklmnopqrstuvwxyz",
        "abcdefghijklmnopqrstuvwxyz",
        "abcdefghijklmnopqrstuvwxyz",
    };

    cout << "\n----------------------------------------------------------\n";
    cout << "\nExecuting all swaps in order from 1-3:" << endl;
    cout << "Line 1:";

    recursive(myStrings,0,12,19);
    
    //Loops through each character and prints them out 1 space apart for readability
     for(int i = 0; i < myStrings[0].length(); i++)
    {
        cout << myStrings[0].at(i) << " ";
    }
    cout <<endl;

    cout << "Line 2:";
    recursive(myStrings,1,5,23);

     for(int i = 0; i < myStrings[1].length(); i++)
    {
        cout << myStrings[1].at(i) << " ";
    }
    cout << endl;
    cout << "Line 3:";
    recursive(myStrings,2,1,26);
     for(int i = 0; i < myStrings[2].length(); i++)
    {
        cout << myStrings[2].at(i) << " ";
    }
    cout << endl;

    cout << "************************************************************\n";
    cout << "                       EXTRA CREDIT!" << endl;
    cout << "\n----------------------------------------------------------\n";
    cout << "Executing all swaps using iterative function:" << endl;
    iterative(myStrings,3,12,19);
    for(int i = 0; i < myStrings[3].length(); i++)
    {
        cout << myStrings[3].at(i) << " ";
    }
    cout << endl;

 
    iterative(myStrings,4,5,23); //

    for(int i = 0; i < myStrings[4].length(); i++)
    {
        cout << myStrings[4].at(i) << " ";
    }
    cout << endl;

 
    iterative(myStrings,5,1,26);

    for(int i = 0; i < myStrings[5].length(); i++)
    {
        cout << myStrings[5].at(i) << " ";
    }
    cout << endl;

    return 0;
}