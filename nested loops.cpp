#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	// nested loops are loops inside of other loops heavily used in 2d arrays


	char symbol;
	int width;
	int height;

	cout << "enter the symbol to use: ";
	cin >> symbol;

	cout << "enter the width: ";
	cin >> width;

	cout << "enter the height: ";
	cin >> height;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << symbol;
		}
		cout << endl;

	}




	cout << endl;
	return 0;

}