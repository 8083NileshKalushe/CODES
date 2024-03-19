/*6.  Write a program to print the area of a rectangle by creating a class named
       'Area' having two functions. First function named as 'setDim' takes 
	   the length and breadth of the rectangle as parameters and the 
	   second function named as 'getArea' returns the area of the rectangle. 
	   Length and breadth of the rectangle are entered through keyboard.
*/


#include <iostream>
using namespace std;

class Area 
  {
       private:
        int length, breadth;

      public:
        void setDim(int l, int b)
	   {
        length = l;
        breadth = b;
       }

        int getArea() 
	{
        return length*breadth;
    }
};

main() 
{
    Area rectangle;
    int length, breadth;

    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    rectangle.setDim(length, breadth);

    cout << "Area of rectangle: " << rectangle.getArea() <<"\n";
}
