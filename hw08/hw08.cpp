//     // hw08.cpp
//     // to illustrate pointers, pointer arithmetic & dynamic memory
//     /*************************************************************************
//     * AUTHOR : Essa Buloushi
//     * HW08 : pointers, pointer arithmetic & dynamic memory
//     * CLASS : CS 1C
//     * SECTION : July 5 1:27 PM
//     *************************************************************************/
#include "pointing.h"
using namespace hw08;
int increment_value(int x)
{
    return x+= 5;
}
void increment_pointer(int* p)
{
    *p = *p + 1;
}
//------------
double* dynamic_allocation_array_doubles(int array_size)
{
    int* pi_array = new int[DYNAMIC_SIZE];
    double* pd_array = new double[array_size];
    return pd_array;
}
//Need definition for print_2darray_dynamic_pointer
void print_2darray_dynamic_subscript(int** twoDD, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << twoDD[i][j] << " \n";
        }
    }
    cout << "\n";
}
void print_2darray_pointer(double* twoDD, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << *(twoDD + i*col + j) << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void print_2darray_subscript(double twoDD[][ARRAY_SIZE],int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << twoDD[i][j] << " \n"; 
        }
    }
    cout << "\n";
}
void increment_reference(int& r)
{
    r++;
}


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
// Q1.1
    int x = 10;
    int *p;
    *p = x;
    //Q1.2 Is allowed but it is undefined behavior
    //Q1.3
    *p = 5;
    //Q1.4
    int x2;
    x2 = *p;
    //Q1.5
    int *p2;
    p2 = &x2;
    //Q1.6
    p2 = p;
    //Q1.7 P2 now points to x2
    p = &x2;
    

    return 0;
}