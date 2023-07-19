#include <iostream>
using std::string;

class Employee
{
public:
	string Name;
	string Company;
	int Age;
	
	void IntroduceYourself()
	{
		std::cout<<"Name - "<< Name << std::endl;
		std::cout<<"Company - "<< Company << std::endl;
		std::cout<<"Age - "<< Age << std::endl;
	}
	
};

int main()
{
	Employee employee1;
	employee1.Name = "Anugerah";
	employee1.Company = "Pertamina";
	employee1.Age = 24;
	employee1.IntroduceYourself();
	
	Employee employee2;
	employee2.Name = "Jofan";
	employee2.Company = "Jamrud";
	employee2.Age = 14;
	employee2.IntroduceYourself();
}
