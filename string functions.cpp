#include <iostream>
#include <string>
using namespace std;

int main()
{
	// string.length() returns length of a string
	// string.empty() returns true if empty
	// string.clear() clears a string
	// string.append(string2) appends a string
	// string.at(x) returns a character at a given index
    // string.substr(int x, int y) will return a portion of a string, and its called a substring
	// string.insert(int x,string2); insert a string
	// string.find(string2); returns index of string2, very useful
	// string1.erase(x, y) erases portion of a string
	// go to www.cplusplus.com/reference/stringfunctions  for more functions
	
	
	//string first_name;

	//cout << "Enter your first name: ";
	//getline(cin, first_name);


	//if (first_name.empty()) {
	//	cout << "You didnt enter a name";
	//}

	//else if (first_name.length () >= 12) {
	//	cout << "Please enter a name within 12 characters";
	//}

	//else {
	//	cout << "Welcome " << first_name << endl;
	//}


	//string username;

	//cout << "Enter your username : ";
	//getline(cin, username);

	//string email = username.append("@gmail.com");


	//cout << "Your email is now: " << email << endl;

    /*
	string first_name;
	string middle_name;
	string last_name;

	cout << "enter your first name: ";
	getline(cin, first_name);
	cout << "enter your middle name: ";
	getline(cin, middle_name);
	cout << "enter your last name: ";
	getline(cin, last_name);

	char letter1 = first_name.at(0); // (0) takes the first letter
	char letter2 = middle_name.at(0);
	char letter3 = last_name.at(0);

	cout << "your initials are : " << letter1 << letter2 << letter3;

	*/


	/*string first_name;

	cout << "Enter your first name: \n";
	getline(cin, first_name);

	string nickname = first_name.substr(0, 3);

	cout << "Your nickname is: " << nickname << endl;
	cout << "Hello " << nickname;

	*/



	/*string user_name;
	cout << "Enter your username : ";
	getline(cin, user_name);

	user_name.insert(0,"@");


	cout << "Reply: " << user_name;
	*/


	/*string firstname;
	cout << "Enter your first name: ";
	getline(cin, firstname);

	string substring;
	cout << "Search for which character/s?: ";
	getline(cin, substring);

	int position = firstname.find(substring);

	cout << "Found character/s at position: " << position << endl;
	*/




/*string phonenumber;
cout << "enter your phone number: ";
getline(cin, phonenumber);


phonenumber.erase(0, 4);


cout << "phone number: "; << phonenumber;
*/


    


      
   







	

	cout << endl; 
	return 0;

}