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

    int increment_value(int x);
    void increment_pointer(int* p);
    void increment_reference(int& r);
    void print_2darray_subscript(double twoDD[][ARRAY_SIZE], int row, int col);
    void print_2darray_pointer(double* twoDD, int row, int col);

    void print_2darray_dynamic_subscript(int** twoDD, int row, int col);
    void print_2darray_dynamic_pointer(int** twoDD, int row, int col);
    double* dynamic_allocation_array_doubles(int array_size);
    int* pi_array = new int[DYNAMIC_SIZE];
    double* pd_array = new double[ARRAY_SIZE];
    }

#endif
