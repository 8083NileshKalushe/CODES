/* 1.Create a class named 'Student' with a string variable 'name' and 
     an integer variable 'roll_no'. Assign the value of roll_no as '2'
	 and that of name as "John" by creating an object of the class Student.
*/


#include<iostream>
using namespace std;

class Student 
   {
     public:
      string name;       // A string variable to store the student's name
      int roll_no;      // An integer variable to store the student's roll number
   };
   
main() 
{
    
    Student student;       // an object of the Student class

    student.name = "John";
    student.roll_no = 2;

                // Print the student's name and roll number
    cout << "Name: " << student.name << "\n";
    cout << "Roll No: " << student.roll_no <<"\n";
    
}
