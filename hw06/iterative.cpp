#include "iterative.h"

string iterative(string myString[],int arr,int num1,int num2)
{

    for (int i = num1; i < num2; i++)   //Loops through every string between num1 and num2
    {
        char temp = myString[arr].at(num1 - 1); //Sets num1 value to a temp character
        myString[arr].at(num1 - 1) = myString[arr].at(num2 - 1);    //Sets num1 value to first value of num2
        myString[arr].at(num2 - 1) = temp;  //Sets num2 value to the temporary character of num1
        num1++; //Increments value to move closer to num2
        num2--; //Decrements value to get closer to num1
    }
return myString[arr];
}