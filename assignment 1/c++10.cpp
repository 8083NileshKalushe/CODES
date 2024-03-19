/* 10.Write a program to print the volume of a box by creating a class named 'Volume' 
      with an initialization list to initialize its length, breadth and height. 
	  (just to make you familiar with initialization lists)
*/
#include <iostream>
using namespace std;

class Volume 
{
       private:
        int length, breadth, height;

    public:
    Volume(int l, int b, int h) 
	  {
	    length=l;
		breadth=b;
	    height=h;
      }
    int getVolume() 
	   {
        return length * breadth * height;
       }
};

main() {
    int length, breadth, height;

    cout << "Enter length of the box=";
    cin >> length;

    cout << "Enter breadth of the box=";
    cin >> breadth;

    cout << "Enter height of the box=";
    cin >> height;

    Volume box(length, breadth, height);

    cout << "Volume of the box: " << box.getVolume() << "\n";
}
