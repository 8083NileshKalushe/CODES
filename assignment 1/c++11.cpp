/*  11. Write a program that would print the information (name, year of joining, salary, 
        address) of three employees by creating a class named 'Employee'. 
		The output should be as follows:
             Name Year of joining Address
             Robert 1994 64C- WallsStreat
             Sam 2000 68D- WallsStreat
            John 1999 26B- WallsStreat
*/

#include <iostream>
using namespace std;

class Employee
 {
      private:
       char name[50];
       int yearOfJoining;
       char address[50];

public:
    Employee() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter year of joining: ";
        cin >> yearOfJoining;

        cout << "Enter address: ";
        cin >> address;
    }

    void printInfo() {
        cout << name << "\t" << yearOfJoining << "\t" << address << "\n";
    }
};

main() {
    Employee emp1;
    Employee emp2;
    Employee emp3;

    cout << "Name\tYear of Joining\tAddress" << "\n";
    emp1.printInfo();
    emp2.printInfo();
    emp3.printInfo();

  
}
