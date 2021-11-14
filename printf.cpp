#include <iostream>

using namespace std;

int main()
{

	// printf() 

	string make = "Mercedes benz";
	string model = "E class";
	int year = 2007;
	double price = 10000.990;
	char for_sale = 'Y';

	printf("Your car is made by: %s ", "Mercedes benz");           cout << endl;         // s after % is a string specifier 
	printf("Your car is made by: %s ", make.c_str());              cout << endl;         // .c_str() for strings olny cause string is not supported by c++, its an old c function
	printf("Your car is a: %s %s", "Mercedes benz", "E class");    cout << endl;
	printf("Your car is a: %s %s", make.c_str(), model.c_str());   cout << endl;


	printf("The year is: %d", year); cout << endl; // for integer %f
	printf("The price is: %f", price); cout << endl; // for double or float %f
	printf("Is its for sale: %c", for_sale); cout << endl; // for characters use %c


	printf("The price is: $%.2f", price); cout << endl; // .2 after % olny prints 2 decimals after 0
	printf("This precedes with blank spaces: %30s", "Mercedes benz"); cout << endl; // the number after % gives blank spaces between the words. it includes the characters of the word that comes after
	printf("This precedes with zeros: %030s", "Mercedes benz"); cout << endl;
	printf("Left justify: %-30s%-30s", "Mercedes benz", "E class"); cout << endl;





	cout << endl;
	return 0;
}