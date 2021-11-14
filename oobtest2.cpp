#include <iostream>
using namespace std;
using std::string;


class People { // polymorphism, the ability of an object to have multiple forms

private:
	string Name; // if we use protected we can access the attributes on derived/child classess
	string Work;
	string Status;
	string City;
	int Age;

public:

	void setName(string name) {
		Name = name;
	}
	string getName() {
		return Name;
	}

	void setStatus(string status) {
		Status = status;
	}
	string getStatus() {
		return Status;
	}

	void setCity(string city) {
		City = city;
	}
	string geCity() {
		return City;
	}

	void setAge(int age) {
		Age = age;
	}
	int getAge() {
		return Age;
	}


	void information() {
		cout << "Name - " << Name << "." << endl;
		cout << "Status - " << Status << "." << endl;
		cout << "City - " << City << "." << endl;
		cout << "Age - " << Age << "." << endl;

	}

	void askforpromotion() {
		if (Age >= 30) {
			cout << "Congratulations , " << Name << " you are promoted!" << endl;
		}
		else {
			cout << "Sorry, " << Name << " no promotion for you. ):" << endl;
		}
	}


	People(string name, string status, string city, int age) {
		Name = name;
		Status = status;
		City = city;
		Age = age;
	}


	 virtual void Detyra() {   // if we use virtual the code on line 133-134 works
		cout << Name << " is checking email, task backlog, performing tasks..." << endl;
	}

};


class Developer: public People { // a derived/child class of the class people, public means that we can access functions of the parent class
public:
	string FavProgrammingLanguage;
	Developer(string name, string status, string city, int age, string favProgrammingLanguage) 
		:People(name, status, city, age)
	{
		FavProgrammingLanguage = favProgrammingLanguage;
	}

	void FixBug(){
		cout << getName() << " fixed bug using " << FavProgrammingLanguage << endl;
	} // we use getName() to access the properties of the people class

	void Detyra() {
		cout << getName() << " is writting code in " << FavProgrammingLanguage <<endl;
	}

};


class Teacher :public People {
public:
	string Subject;
	void PrepareLesson() {
		cout << getName() << " is preparing a " << Subject << " lesson." << endl;
	}
	Teacher(string name, string status, string city, int age, string subject) 
		:People(name, status, city, age)
	{
		Subject = subject;
	}

	void Detyra() {
		cout << getName() << " is teaching " << Subject << endl;
	}

};




int main() { // the most common use of polymorphism is when a 
	         // parent class reference is used to a child class object
	Developer d= Developer("Rei", "Single", "Fier", 17, "C++");
	Teacher t=Teacher("John", "Married", "Honolulu", 35, "Math");
	             // the method detyra is an example of polymorphism
	             // multiple forms with the same name/identity
	People* p1 = &d; //the pointer of people is holding a reference to the developer class
    People* p2 = &t;  // the pointer is holding a reference to the teacher child class

	p1->Detyra();
	p2->Detyra();  // when using a pointer we use ->
}