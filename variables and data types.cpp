#include <iostream>

using namespace std;

int main() {

	/* x=1+1
	   x=2
       4=x+x  x = variable can be a word too ex. x= bro or x= @ or x= true/false
	   */
     
	int year = 2020; 
	double price = 9999.99;
	char status = 'N';
	string make = "Ford";
	string model = "Mustang";
	bool for_sale = true; // if its true then nr 1 shows up, false=0 // 
	
	price = price * 0.9 ; // can be used for math problems //
	for_sale = false;
	string car = make + " " + model; // you can also combine strings // 

	cout << "Year: " << year << endl;
	cout << "Price: " << price << endl;
	cout << "Status: " << status << endl;
	cout << "Manufactured by: " << make << endl;
	cout << "Model: " << model << endl;
	cout << "Car: " << car << endl;
	cout << "For sale: " << for_sale << endl;

	return 0;
} 

