#include "recursive.h"
string recursive(string myString[],int arr, int num1, int num2) 
{
    if ((num1) < (num2) )
    {
        char temp = myString[arr].at(num1 - 1); //Sets num1 value to a temp character
        myString[arr].at(num1 - 1) = myString[arr].at(num2 - 1); //Sets num1 value to first value of num2
        myString[arr].at(num2 - 1) = temp; //Sets num2 value to the temporary character of num1
        return recursive(myString,arr, num1 + 1, num2 - 1); //Returns recursive function and loops through until num 1 reaches the size of num2
    } 
    else {
        return myString[arr];   //Once recurison finishes, the function returns the value wanted
    }
}
