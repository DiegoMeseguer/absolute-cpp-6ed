#include <iostream>
#include <string>
using namespace std;

int main() {
	
	// 4) If we omit the const at the beginning of the
	// 	declaration and definition then it would be
	// 	legal to change the value of the anonymous
	// 	object (m1 + m2) with the assignment operator

	// 	If the plust operator returns its value by const
	// 	value then it would be illegal since the returned
	// 	object is const and cannot be change in such a way

	// 5) nope

	// 6) A friend function for a class has access to all the
	// 	private member variables and functions of the class
	// 	but it's still an ordinary function (we don't use the
	// 	. operator to call it and we don't use the class
	// 	qualifier when we define it).

	// 	A member function for a class has access to all the
	// 	members of the class. We can use the dot operator with
	// 	such functions and when we define them we have to use
	// 	the scope resolution operator and the class qualifier.

	// 7) nope

	// 8) We need to add the following to the class definition:

	// 	friend bool operator <(const Money& amount1, const Money& amount2);

	// 	Then for the definition of our overloaded operator we need:
		
	// 	bool operator <(const Money& amount1, const Money& amount2)
	// 	{code goes here}

	return 0;
}
