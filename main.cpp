#include<iostream>
#include "employee.h"
using namespace std;
int main()
{
	PartTimeEmp p(432, "Ankur", 5000);
	FulltimeEmp f(672, "Aman", 42000);
	cout << "NAME: " << p.getname() << endl;
	cout << "WAGE: " << p.getwage() << endl;
	cout << "NAME: " << f.getname() << endl;
	cout << "SALARY: " << f.getSalary() << endl;
}