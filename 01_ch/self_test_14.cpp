/* The error of this program is that it originally intended to input both the first and last name
	in one variable called fullName, but this will not work because of the blank space between the
	first and last name.
*/

#include<iostream>
#include<string>
using namespace std;

int main() {

	string first_name, last_name;
	string fullName;
	int age;

	cout << "Enter your first and last name." << endl;
	cin >> first_name >> last_name;

	fullName = first_name + " " + last_name;

	cout << "Enter your age." << endl;
	cin >> age;

	cout << "You are " << age << " years old, " << fullName << endl;

	return 0;
}
