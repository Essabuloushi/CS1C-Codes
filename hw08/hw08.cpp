//     // hw08.cpp
//     // to illustrate pointers, pointer arithmetic & dynamic memory
//     /*************************************************************************
//     * AUTHOR : Essa Buloushi
//     * HW08 : pointers, pointer arithmetic & dynamic memory
//     * CLASS : CS 1C
//     * SECTION : July 5 1:27 PM
//     *************************************************************************/
#include "pointing.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace hw08;
namespace hw08
{
// const int ARRAY_SIZE = 5;
// const int DYNAMIC_SIZE = 15;
// const int TIC_TAC_TOE_SIZE = 3;
void print_2darray_dynamic_pointer(int** twoDD, int row, int col)
 {
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << *(twoDD + i*col + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int increment_value(int x)
{
    return x += 5;
}
void increment_pointer(int *p)
{
    *p = *p + 1;
}
//------------
double* dynamic_allocation_array_doubles(int array_size)
{
    int *pi_array = new int[DYNAMIC_SIZE];
    double *pd_array = new double[array_size];
    return pd_array;
}
// Need definition for print_2darray_dynamic_pointer

void print_2darray_dynamic_subscript(int **twoDD, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << twoDD[i][j] << " \n";
        }
    }
    std::cout << "\n";
}
void print_2darray_pointer(double *twoDD, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << *(twoDD + i * col + j) << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}
void print_2darray_subscript(double twoDD[][ARRAY_SIZE], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << twoDD[i][j] << " \n";
        }
    }
    std::cout << "\n";
}
void increment_reference(int &r)
{
    r++;
}
}


// using namespace std;

int main()
{
    cout << "**********************************************************\n";
    cout << "   Programmed by   : Essa Buloushi\n";
    cout << "   CS1C            : Mon-Thurs:3-5:20\n";
    cout << "   HW 08           : Dynamic Pointers\n ";
    cout << "**********************************************************\n";
    // Q1.1
    int x = 10;
    int *p = &x;
    // Q1.2 Operation does not work due to the fact taht the value can only be a pointer type
    // double* q = &x;
    // Q1.3
    *p = 5;
    // Q1.4 - Operation is allowed
    int x2 = *p;
    // Q1.5 - Operation is allowed
    int *p2;
    p2 = &x2;
    // Q1.6 - Operation is allowed
    p = p2;
    // Q1.7 P2 now points to x2 - Operation is allowed
    p = &x2;

    // Q#1 Referene examples
    int y = 50;
    // Q1.8 Operation is allowed
    int &r = y;
    // Q1.9
    // double& s = y; //Does not work due to the fact that y can only work with type int
    // Q1.10 - Operation is allowed
    r = 10;
    // Q1.11 - Operation is allowed
    int y2 = r;
    // Q1.12 - Operation is allowed
    int &r2 = y2;
    // Q1.13 - Operation is allowed
    r = r2;
    // Q1.14 - Operation is allowed
    y2 = r;
    // Q1.15 - Operation is not allowed. The reason for this is simply due to the fact that the variable r3 which
    // Is being reference to a variable of uninitalized int means that it cannot point to nothing. The varaible must have
    //  a value and a spot in memory
    // int& = r3;
    // Q#1 - Poiner vs refernce: increment functions
    { // This block allows for the definition of varivales within its block scope therefore avoiding redefinition errors
        // using namespace hw08;
        int x = 100;
        int x2 = 25;
        int *p = &x2;
        int &r = x;
        std::cout << "increment pointer vs reference" << std::endl
             << std::endl;

        std::cout << x << std::endl;
        std::cout << hw08::increment_value(x) << std::endl; // x not changed when passed by value
        std::cout << x << std::endl;

        std::cout << x2 << std::endl;
        hw08::increment_pointer(p); // p points to x2, x2 updated
        std::cout << x2 << std::endl;

        std::cout << x << std::endl;
        hw08::increment_reference(r); // r refers to x, x updated
        std::cout << x << std::endl;
    }
        // Q#2 - pointer arithmetic
        double aDoubles[10];
        double aDoubles2[10];
        double *pd = &aDoubles[5];   // point to aDoubles[5]
        double *pd2 = &aDoubles[7];  // point to aDoubles[7]
        double *pd3 = &aDoubles2[7]; // point to aDoubles[7]
        *pd = 3;
        pd[2] = 4;
        pd[-3] = 5;
        pd2[5] = 6;

        // Q2.1 - Operation is allowed
        pd += 3;
        // Q2.2 - Operation is allowed
        pd -= 6;

        // Q2.3
        // pd+= 1000; This is an error simply due to the fact that the array is declared to a fixed size of 10 and this exceeds it
        // Q2.4
        // double d = *pd; This does not work because d is an independent variable that differs to *pd which works with arrays
        // Q2.5
        //*pd = 12.34; This does not work because the container is being given a value which is not allowed

        // Q2.6
        double elements = pd2 - pd;
        std::cout << "\n"
             << elements << std::endl;
        // Q2.7
        // int dif2 = pd + pd2; This does not work because pd is of type double and dif2 is of int
        // Q2.8
        // int dif3 = pd2 - pd3; This does not work because pd is of touble double and dif3 is of int
        // Q2.9 Print the array going forwards
        cout << "Printing arrays of doubles going forward:" << endl;
        for (double *p = &aDoubles[0]; p <= &aDoubles[9]; p++)
        {
            std::cout << *p << "\n";
        }
        std::cout << "\n";
        // Q2.10 Print array going backwards
        cout << "Printing array going backwards:" << endl;
        for (double *p = &aDoubles[9]; p > &aDoubles[0]; p--)
        {
            std::cout << *p << std::endl;
        }
        std::cout << std::endl;

        double *pd4 = &aDoubles[0];
        double *pd5 = aDoubles + 5;
        double *pd6 = &aDoubles[5];
        double *pd7 = &aDoubles2[5];

        // Q2.11
        if (pd5 == pd6)
        {
            std::cout << "Pointers correspond to the same element of the array" << std::endl;
        }
        else
        {
            std::cout << "Pointers do not correspond to the same element of the array" << std::endl;
        }
        // Q2.12
        // if (pd6!= pd7) std::cout << "pointers point to the different elements of the array" << std::endl; This statement will be executed because it is true and the pointers point to different sections of memory

        // Q3 - Pointer arithmetic, indexing multidimensional arrays
        double twoDDoubles[hw08::ARRAY_SIZE][hw08::ARRAY_SIZE] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25}};

        std::cout << std::endl
             << "print 2d array of doubles" << std::endl;

        // print 2ddoubles via subscript operator
        hw08::print_2darray_subscript(twoDDoubles, hw08::ARRAY_SIZE, hw08::ARRAY_SIZE);
        // print 2ddoubles via pointer arithmetic
        hw08::print_2darray_pointer((double *)twoDDoubles, hw08::ARRAY_SIZE, hw08::ARRAY_SIZE);

        //_____________________________________________________________________________________________________________________________
        // complete the following dynamic allocation examples
        // Q#4 - new, delete operator examples
        {
            // using namespace hw08;
            // Q4.1 - Operation is allowed
            int *pi = new int;
            // Q4.2 - Operaiton is allowed
            int *qi = new int[5];
            int &ri = *pi;
            int &ri2 = *qi;
            int *&ri3 = qi;
            ri = 100;
            ri2 = 200;
            //Q4.3 - Operation is allowed
            double *pd = new double;
            //Q4.4 - Operation is allowed
            double *qd = new double[hw08::DYNAMIC_SIZE];
            //Q4.5  This would not work because pi is of type int and pd is of type double therefore they are incompatible with one another
            // pi = pd;
            //Q4.6 This would not work because pi is of type int and pd is of type double therefore they are incompatible with one another
            // pd = pi;

            double x = *pd;        // read the (first) object pointed to by pd
            double y = qd[5];      // read the sixth object pointed to by qd
            double z = *(qd + 10); // read the tenth object pointed to by qd

            delete pd;
            delete[] qd;

            std::cout << std::endl
                 << "ri, ri2, ri3 before delete" << std::endl
                 << std::endl;

            std::cout << ri << std::endl;  // ri refers to *pi
            std::cout << ri2 << std::endl; // ri2 refers to *qi
            std::cout << ri3 << std::endl; // ri3 refers to qi

            //Q4.7 The values ri,ri2, ri3 are all deallocated from the heap because they all point to pi
            delete pi;
            //Q4.8 The values ri,r2, and r4 simply become loose values that point to nothing and remainds random pointers with memory addresses
            delete[] ri3;

            std::cout << std::endl
                 << "ri, ri2, ri3 after delete" << std::endl
                 << std::endl;

            std::cout << ri << std::endl;
            std::cout << ri2 << std::endl;
            std::cout << ri3 << std::endl
                 << std::endl;
        }

        double *array_of_doubles = hw08::dynamic_allocation_array_doubles(1000);
        //Q4.9 Array is no longer needed 
        delete[] array_of_doubles;

        // Q#5 - dynamic 2d arrays, indexing via subscript operator, pointer arithmetic

        // tic tac toe board is an array of int pointers
        // each int pointer in the board points to a row

        // declare a pointer to an array of int pointers (i.e. a pointer to a pointer of type int)
        int **p_p_tictactoe = new int *[hw08::TIC_TAC_TOE_SIZE];
        //Q5.1
        p_p_tictactoe[0] = new int[hw08::TIC_TAC_TOE_SIZE]{1, 0, 0};

        //Q5.2
        p_p_tictactoe[1] = new int[hw08::TIC_TAC_TOE_SIZE]{0, 1, 0};

        //Q5.3
        p_p_tictactoe[2] = new int[hw08::TIC_TAC_TOE_SIZE]{0, 0, 1}; // [5.3] row3

        hw08::print_2darray_dynamic_subscript(p_p_tictactoe, hw08::TIC_TAC_TOE_SIZE, hw08::TIC_TAC_TOE_SIZE);
        hw08::print_2darray_dynamic_pointer(p_p_tictactoe, hw08::TIC_TAC_TOE_SIZE, hw08::TIC_TAC_TOE_SIZE);

        // clean up board, go in reverse order of declaration

        //Q5.4
        for (int i = 0; i < hw08::TIC_TAC_TOE_SIZE; i++)
        {
            delete[] p_p_tictactoe[i];
        }

        //Q5.5
        delete[] p_p_tictactoe;

        return 0;
    }

    //------------------------------------------------------------------------------
// Written Answers:

//Q#1 : A pointer is a variable that holds the memory address of another variable is its value. A reference is another form of the variable that holds the value. Pointers can change to different variables throughout a program depending on the creators needs and wants. The value of a pointer can be found using the dereference variable *, and the address can be found using the & symbol.

//Q#3 : TwoDDoubles array stores the data as a row order. Its neccessary to intialize twoDDoubles as a *double in the print method in order to recognize the variable as a 1D array since formally, the function will only recognize the first value of the array when summoned.

//Q#5 : The P_P_tictactoe pointer 2d array is an array that points to a block of memory which points to anmother block, therefore stacking the pointers upon one another in order to reach the value being targeted. In order to loop through the array, a pointer must be passed first go pass through and point to the next set which contains the actual values.