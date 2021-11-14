#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main() {

	//pointes
	// & address-of operator
	// * dereferance operator

	string name = "Rei";
	int age = 100;
	string food = "Pizza";

	string* pName = &name; // pname is now a pointer of the variable name
	int* pAge = &age; // the same as above
	string* pFood = &food;


	cout << pName << endl;
	cout << *pAge << endl; // if we do *pAge it prints the actual value and not the address
	cout << pFood << endl;





	cout << endl;
	return 0;
}
