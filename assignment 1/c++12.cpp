/* 12. Write a program to print the name, salary and date of joining
       of 10 employees in a company. Use array of objects.
              Practice Problem
*/
#include <iostream>
using namespace std;

class Employee 
{
   private:
    char name[50];
    double salary;
    char dateOfJoining[20];

   public:
    void setData()
	 {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter salary: ";
        cin >> salary;

        cout << "Enter date of joining: ";
        cin >> dateOfJoining;
     }

    void printInfo() 
	{
    cout << "Name: " << name << "\nSalary: " << salary << "\nDate of Joining: " << dateOfJoining << "\n";
    }
};

main() 
{
    Employee employees[10];

    for (int i = 0; i < 10; ++i) 
	{
        cout << "Enter information for employee " << i + 1 << "\n";
        employees[i].setData();
    }

    cout << "Employee Information:" << "\n";
    
    for (int i = 0; i < 10; ++i)
	 {
        employees[i].printInfo();
    }

}
