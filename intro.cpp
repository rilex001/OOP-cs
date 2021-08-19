#include <iostream>
using std::string;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee {

private: 
	string Name;
	string Company;
	int Age;

public:
	
	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		if(age >= 18)
		Age = age;
	}
	int getAge() {
		return Age;
	}
	

	void IntroduceYourself() {
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}
	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	};
	void AskForPromotion() {
		if (Age > 30)
			std::cout << Name << ", got promoted!" << std::endl;
		else
			std::cout << Name << ", Sorry no promotion for you! " << std::endl;
	}

};

class  Developer:Employee {

public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage)
		:Employee(name, company, age)
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}

};

int main()
{

//	Employee employee2 = Employee("Marko", "Tehnomedija", 44);
//	employee2.IntroduceYourself();

//	employee1.setAge(15);
//	std::cout << employee1.getName() << " is " << employee1.getAge() << " yesrs old" << std::endl;
//	employee1.AskForPromotion();

	Developer d = Developer("Marko", "Tehnomedija", 44, "Javascript");
}