#include <iostream>
#include <string>
using namespace std;

int main() {
	
	// 1) They are the same thing in essence, an operator is
	// 	basically just syntactic sugar for a function. One
	// 	difference can be the order in which the arguments or
	// 	operands are placed in the function.

	// 2)  We need a declaration like:
	// 	bool operator <(const Money& amount1, const Money& amount2);

	// 	And we need a header like:
	// 	bool operator <(const Money& amount1, const Money& amount2)
	// 	{code goes here}

	// 3)  No, because there is a restriction that says that 
	//	   at least one of the operands must be a class type.

	return 0;
}
