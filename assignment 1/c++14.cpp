/*  14. Write a program to calculate the average height of all the students of a class. 
        The number of students and their heights are entered by the user.
*/

#include <iostream>
using namespace std;

class Student
{
       private:
        int height;

    public:
       void setHeight(int h) 
	   {
        height = h;
       }

        int getHeight()
		 {
           return height;
         }
};

main() 
{
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i)
	 {
        int height;
        cout << "Enter the height of student " << i + 1 << " in centimeters: ";
        cin >> height;
        students[i].setHeight(height);
    }

    int totalHeight = 0;
    
      for (int i = 0; i < numStudents; ++i)
	   {
        totalHeight += students[i].getHeight();
       }

    int averageHeight = totalHeight / numStudents;
    cout << "The average height of all students is: " << averageHeight << " centimeters" << "\n";

    
}
