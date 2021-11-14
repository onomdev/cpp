#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	/*string cars[] = {"Corvette", "Tesla", "Ferrari", "Audi"}; // all arrays must be of the same data type

	//int years[] = { 2021, 2022, 1999, 1942 };

	for (int i = 0; i < size(cars); i++) { // prints all the array values in a convinient way
		cout << cars[i] << endl;
	}*/



	// below a simple project

	int number;

	cout << "How many cars do you have?: \n";
	cin >> number;
	cin.ignore();
	string* pCars = new string[number]; // pointer thats storing the address of my array

	for (int i = 0; i < number;i++) {
		cout << "Enter car #" << i + 1 << " ";
		getline(cin, pCars[i]);
	}

	cout << "Here is your garage! \n";
	cout << "---------------------\n";

	for (int i = 0; i < number; i++) {
		cout << "Parking spot #" << i + 1 << " " << pCars[i] << endl;
	}


	cout << endl;
	return 0;
}
