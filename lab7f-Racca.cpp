// Emerson Racca
// 10/19/2021
// Lab 7f - In-class String Parsing

/*
Write a function with the following prototype that returns a name in proper order:
Flintstone, Fred W.

string lastNameFirst(string name[]);
1. Instantiate a string array with three elements named userName in the main.  Use userName[0] to store the users first name, userName[1] to store the middle name, and userName[2] to store the last name.
2. Populate the string array with user information.
3. Send the string array, userName, to the function which will return a single string in proper format as shown above.  Be sure to capitalize the strings.
4. Output the result in the main.

You may/should use function composition. That is, you can use the function created in the previous assignment within this function to ensure that the user name is properly capitalized. We will reuse this function later in the course.


First name: anna rose
Middle name: bailey
Last name: smith

Your name is: Smith, Anna Rose B.
*/

#include<iostream>
#include<string>

using namespace std;

string lastNameFirst(string name[]);
void capitalize(string &arg);

int main(void) {
	int const s = 3;
	string userName[s];

	cout << "In-class String Parsing\n";
	cout << "This app returns a name in proper order.\n\n";

	cout << "First name :  ";
	getline(cin, userName[0]);

	cout << "Middle name:  ";
	getline(cin, userName[1]);

	cout << "Last name  :  ";
	getline(cin, userName[2]);

	cout << "\nYour name is:  " << lastNameFirst(userName) << endl;

	return 0;
}

string lastNameFirst(string name[]){
	for (int u = 0; u < 3; u++)
		capitalize(name[u]);

	return (name[2] + ", " + name[0] + " " + name[1][0] + ".");
}

void capitalize(string &arg) {
	arg[0] = toupper(arg[0]);

	for (int i = 0; i < (signed int)arg.size(); i++) {
		if (arg[i] == ' ')
			arg[i + 1] = toupper(arg[i + 1]);
	}
}