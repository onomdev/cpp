#include <iostream>
using std::string;


class AbstractEmployee { //abstraction, interface
	virtual void AskForPromotion() = 0;

};


class Employee:AbstractEmployee {
private:
	string Name;
	string Company;
	int Age;

public: // public means that we can acces the values of the class, there is private which is the default and protected

	void setName(string name) { // setter
		Name = name;
	}
	string getName() { // getter
		return Name;
	}

	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}

	void setAge(int age) {
		if(age >= 18) //validation check, doesnt work if age < 18, example
		Age = age;
	}
	int getAge() {
		return Age;
	}



	void IntroduceYourself() { // we created our own function with void
		std::cout << "Name - " << Name << std::endl;
		std::cout << "Company - " << Company << std::endl;
		std::cout << "Age - " << Age << std::endl;
	}

	Employee(string name, string company, int age) { // constructor must be public
		Name = name;
		Company = company;
		Age = age;

	}
	void AskForPromotion() {
		if (Age > 30)
			std::cout << Name << " got promoted!" << std::endl;
		else
			std::cout << Name << ", sorry no promotion for you!" << std::endl;
	
	}
	
};


int main()
{

	Employee employee1 = Employee("Rei", "Onom", 17); // more convinient way than the one below
	Employee employee2 = Employee("John", "Amazon", 39);
	
	employee1.AskForPromotion();
	employee2.AskForPromotion();


	

}
