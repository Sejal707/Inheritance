#include<iostream>
using namespace std;
class emp
{
	int empid;
	string name;
public:
	emp(int i, string j)
	{
		empid = i;
		name = j;
	}
	int getid();
	string getname();
};
class FulltimeEmp :public emp
{
	int salary;
public:
	FulltimeEmp(int e, string n, int s) :emp(e, n)
	{
		salary = s;
	}
	int getSalary();
};
class PartTimeEmp :public emp
{
	int wage;
	public:
		PartTimeEmp(int e, string n, int w) :emp(e, n)
		{
			wage = w;
		}
		int getwage();
};
int emp::getid()
{
	return empid;
}
string emp::getname()
{
	return name;
}
int FulltimeEmp::getSalary()
{
	return salary;
}
int PartTimeEmp::getwage()
{
	return wage;
}