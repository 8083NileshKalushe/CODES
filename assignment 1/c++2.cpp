/* 2. Assign and print the roll number, phone number and address of 
      two students having names "Sam" and "John" respectively by 
	  creating two objects of the class 'Student'.
*/

#include <iostream>
using namespace std;

class Student 
  {
    public:
     string name;
     int roll_no;
     string phone_number;
     string address;
  };

main() 
{
               // object for Sam
    Student sam;
    sam.name = "Sam";
    sam.roll_no = 10;
    sam.phone_number = "9503434638";
    sam.address = "123 Sambhajinagar";

               // object for John
    Student john;
    john.name = "John";
    john.roll_no = 20;
    john.phone_number = "7507559560";
    john.address = "456 Nagar";

                      //details for Sam
    cout << "Name="<<sam.name<<"\n";
    cout << "Roll No="<<sam.roll_no<<"\n";
    cout << "Phone Number="<<sam.phone_number<<"\n";
    cout << "Address="<<sam.address<<"\n";

                     //details for John
    cout << "Name="<<john.name<<"\n";
    cout << "Roll No="<< john.roll_no<<"\n";
    cout << "Phone Number="<<john.phone_number<<"\n";
    cout << "Address="<<john.address<<"\n";

}
