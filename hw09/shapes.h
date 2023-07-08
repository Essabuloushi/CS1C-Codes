// hw09.cpp
// To illustrate Virtual Functions and Abstract Classes
// /*************************************************************************
// * AUTHOR : Essa Buloushi
// * HW09 : Virtual Functions and Abstract Classes
// * CLASS : CS 1C
// * SECTION : July 7 1:27 PM
// *************************************************************************/
#ifndef shape_h
#define shape_h
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class shape 
{
    public:
    /**************************************************************************
    *  Pure Virtual Calculate Perimeter
    * _________________________________________________________________________
    *  Pure Virtual function to set base
    ***************************************************************************/
    virtual float calcPerimeter() const = 0;
    /**************************************************************************
    *   Pure Virtual Calculate Area
    * _________________________________________________________________________
    *   Pure VIrtual function to set base for area calculation
    ***************************************************************************/
    virtual float calcArea() const = 0;
};

/**************************************************************************
*   Derived Class Rectangkle
* _________________________________________________________________________
*   Derived Class of Shape but overrides pure virtual functions
***************************************************************************/
class Rectangle : public shape
{
    private:
    int length; //Length of rectangle
    int width;  //Width of rectangle
    public:
/**************************************************************************
*   Alternate construtor
* _________________________________________________________________________
*   Passes in all values and initializes them
***************************************************************************/ 
    Rectangle(int len, int w) : length(len), width(w) {}
/**************************************************************************
*   Calculate Area functions
* _________________________________________________________________________
* Pure virtual function that is overridden to calculate area of a rectangle
***************************************************************************/
    float calcArea() const override
    {
        return length * width;
    }
/**************************************************************************
* Calculate Perimeter function  
* _________________________________________________________________________
* Pure virtual function that is overidden to calculate the perimeter
* of a rectangle
***************************************************************************/
    float calcPerimeter() const override
    {
       return  2 * (length + width);
    }
/**************************************************************************
*  MUTATOR setLength
* _________________________________________________________________________
* Sets the length of the object
***************************************************************************/
    void setLength(int newLength)
    {
        length = newLength;
    }
/**************************************************************************
* MUTATOR Set Width  
* _________________________________________________________________________
* Sets the width of the object
***************************************************************************/
    void setWidth(int newWidth)
    {
        width = newWidth;
    }
/**************************************************************************
* ACCESSOR Get Width 
* _________________________________________________________________________
* Returns the width
***************************************************************************/  
    int getWidth()
    {
        return width;
    }
/**************************************************************************
* ACCESSOR Get Length  
* _________________________________________________________________________
*  Returns the length of the object
***************************************************************************/ 
    int getLength()
    {
        return length;
    }
};

class Triangle : public shape
{
    private:
    int base; //Base of triangle
    int height; //Height of triangle
    int length; //Length of triangle
    public:
/**************************************************************************
*   Alternate Constructor
* _________________________________________________________________________
*   Alternate constructor for triangle, initializes all variables
***************************************************************************/
    Triangle(int len, int b, int h) : length(len), base(b), height(h) {}
/**************************************************************************
*   Pure Void Function Calculate area
* _________________________________________________________________________
*   Overriden function from derived class, calculates area of triangle
***************************************************************************/    
    float calcArea() const override
    {
        return  (base * height) / 2;
    }
/**************************************************************************
* Pure Void Function Calculate perimeter   
* _________________________________________________________________________
*  Overriden function from derived class, calculates the perimeter of
*  triangle
***************************************************************************/    
    float calcPerimeter() const override
    {
        return length * 3;
    }
/**************************************************************************
* MUTATOR Set Base  
* _________________________________________________________________________
*   Sets the base of the triangle
***************************************************************************/    
     void setBase(int newBase)
    {
        base = newBase;
    }
/**************************************************************************
*   MUTATOR Set Height
* _________________________________________________________________________
*  Sets the height of the triangle
***************************************************************************/    
    void setHeight(int newHeight)
    {
        height = newHeight;
    }
/**************************************************************************
*  ACCESSOR getHeight
* _________________________________________________________________________
*   Returns the height of the triangle
***************************************************************************/    
    int const getHeight()
    {
        return height;
    }
/**************************************************************************
*   ACCESSIR getBase
* _________________________________________________________________________
*   Returns the base of the triangle
***************************************************************************/    
    int const getBase()
    {
        return base;
    }
/**************************************************************************
* MUTATOR Set Length  
* _________________________________________________________________________
*   Sets the length of the triangles sides
***************************************************************************/    
    void setLength(int newLength)
    {
        length = newLength;
    }
/**************************************************************************
*   ACCESSOR getLength
* _________________________________________________________________________
* Returns the length of the triangles sides 
***************************************************************************/    
    int const getLength()
    {
        return length;
    }
};
/**************************************************************************
*   Print Area
* _________________________________________________________________________
*  Prints the area of whatever object is passed in that derives from shape
***************************************************************************/
void printArea(const shape& myShape)
{
    cout << "Area of shape is: ";
    cout << myShape.calcArea() << endl;
}
/**************************************************************************
*   Print Perimeter
* _________________________________________________________________________
* Prints the perimeter of whatever object that derives from shape
***************************************************************************/
void printPerimeter(const shape& myShape)
{
    cout << "Perimeter of shape is: ";
    cout << myShape.calcPerimeter() << endl;
}

#endif

