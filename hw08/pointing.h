    // hw08.cpp
    // to illustrate pointers, pointer arithmetic & dynamic memory
    /*************************************************************************
    * AUTHOR : Essa Buloushi
    * HW08 : pointers, pointer arithmetic & dynamic memory
    * CLASS : CS 1C
    * SECTION : July 5 1:27 PM
    *************************************************************************/
    #ifndef pointing_h
    #define pointing_h
    #include <iostream>
    #include <iomanip>
    using namespace std;
    // function definitions go into hw08.cpp:
    // hw08.cpp
    namespace hw08 
    {
    const int ARRAY_SIZE = 5;
    const int DYNAMIC_SIZE = 15;
    const int TIC_TAC_TOE_SIZE = 3;
    // function definitions:

    /**************************************************************************
    *   Increment Value
    * _________________________________________________________________________
    *   This function passes in a variable and increments the value of it.
    ***************************************************************************/
    int increment_value(int x);
    /**************************************************************************
    *  Increment Pointer
    * _________________________________________________________________________
    * This function passes in a pointer and increments the value of the 
    * pointer variable
    ***************************************************************************/
    void increment_pointer(int* p);
    /**************************************************************************
    *  Increment Reference
    * _________________________________________________________________________
    *  This function passes a pointer by reference and directly changes 
    *  the value changed in the variable
    ***************************************************************************/
    void increment_reference(int& r);
   /**************************************************************************
    * Print 2d Array Subscripts 
    * _________________________________________________________________________
    * This function passes in a 2d array and prints the values stored in the
    * array by dereferencing
    ***************************************************************************/
    void print_2darray_subscript(double twoDD[][ARRAY_SIZE], int row, int col);
    /**************************************************************************
    *  Print 2darray pointer
    * _________________________________________________________________________
    *   This function prints a 2d array by pointer to the blocks of memory
    *   and printing whatever is stored in the values
    ***************************************************************************/
    void print_2darray_pointer(double* twoDD, int row, int col);
    /**************************************************************************
    *  Print 2d array Dynamic Subscript
    * _________________________________________________________________________
    * This function prints the 2d array using pointer arithmetic and
    * returns the values stored in the memory addresses 
    ***************************************************************************/
    void print_2darray_dynamic_subscript(int** twoDD, int row, int col);
    /**************************************************************************
    * Print 2d array dynamic pointer 
    * _________________________________________________________________________
    * This function prints the 2d array pointers and their memory addresses
    ***************************************************************************/
    void print_2darray_dynamic_pointer(int** twoDD, int row, int col);
    /**************************************************************************
    * Dynamic allocation array doubles   
    * _________________________________________________________________________
    * This function dynamically allocates memory for an array and its size
    * by using array_size which is passed in from main
    ***************************************************************************/
    double* dynamic_allocation_array_doubles(int array_size);
    int* pi_array = new int[DYNAMIC_SIZE]; //Dynamically allocates int array
    double* pd_array = new double[ARRAY_SIZE];  //Dynamically allocates double array
    }

#endif