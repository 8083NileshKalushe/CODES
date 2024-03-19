/*5. Write a program to print the area of two rectangles having sides (4,5) and (5,8) 
     respectively by creating a class named 'Rectangle' with a 
	 function named 'Area' which returns the area. Length and
     breadth are passed as parameters to its constructor.
*/

#include <iostream>
using namespace std;

class Rectangle 
{
       private:
         int length, breadth;

        public:
      	
           Rectangle(int l,int b)
		   {
		   length = l;
		   breadth = b;
	       }
         
    void Area() 
	  {
        int area = length*breadth;
        cout<<"Area="<<area<<"\n";
      }
};

main() 
{
    Rectangle rectangle1(4, 5);
    Rectangle rectangle2(5, 8);

    cout<<"Rectangle 1=\n";
    rectangle1.Area();
    cout<<"Rectangle 2=\n";
    rectangle2.Area();
}
