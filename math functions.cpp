#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() 
{
	double x; // max and min function. max function shows the highest of the numbers. min functions shows the lowest one
	double y; // power function returns the power of the number. x ^ y.   pow(x, y)
	          // square root function returns the square root.   sqrt(x)
	          // absolute value of a number returns the absolute value of a  number.  abs(x)
              // round function will round a number to the nearest whole integer. round(x)
	          // sealing function will always round a number up to the nearest whole integer. ceil(x)
	          // floor function the opposite of the sealing function. floor(x)
	          // more math functions at www.cplusplus.com/reference.....




	cout << "This program will enter the max of two numbers \n";

	cout << "enter in number 1: \n";
	cin >> x;


	cout << "enter in number 2: \n";
	cin >> y;

	double z = pow(x, y);
	cout << z;
	




	cout << endl;
	return 0;

}