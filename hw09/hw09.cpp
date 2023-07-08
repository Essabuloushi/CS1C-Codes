// hw09.cpp
// To illustrate Virtual Functions and Abstract Classes
// /*************************************************************************
// * AUTHOR : Essa Buloushi
// * HW09 : Virtual Functions and Abstract Classes
// * CLASS : CS 1C
// * SECTION : July 7 1:27 PM
// *************************************************************************/
#include "shapes.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
    cout << "**********************************************************\n";
    cout << "   Programmed by   : Essa Buloushi\n";
    cout << "   CS1C            : Mon-Thurs:3-5:20\n";
    cout << "   HW 09           : Abstract classes and Virtual Functions\n ";
    cout << "**********************************************************\n";
    Triangle myTriangle(5,4,6); //Initializing values using alternate constructor
    Rectangle myRectangle(10,10);   //Initializing values using alternate constructor

    //Prints the calculation of the area and perimeter of triangle
    cout << "Calcuating Area and Perimeter of Triangle. " << endl;
    printArea(myTriangle);
    printPerimeter(myTriangle);

     //Prints the calculation of the area and perimeter of Rectangle
    cout << "Calcuating Area and Perimeter of Rectangle. " << endl;
    printArea(myRectangle);
    printPerimeter(myRectangle);


    return 0;
}