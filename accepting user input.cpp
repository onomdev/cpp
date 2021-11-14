#include <iostream>
#include <string>
using namespace std;

int main() {

	double gradea;
	double gradeb;
	double gradec;
	


	cout << "Fusni noten e vleresimit te vazhduar: ";
	cin >> gradea;
	cout << "Fusni noten e vleresimit te testit: ";
	cin >> gradeb;
	cout << "Fusni noten e vleresimit te portofolit: ";
	cin >> gradec;
	cout << "Mesatarja eshte: " << gradea * 0.4 + gradeb * 0.4 + gradec * 0.2;



	return 0;
}