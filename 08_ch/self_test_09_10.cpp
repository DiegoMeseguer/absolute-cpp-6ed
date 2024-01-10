#include <iostream>
#include <string>
using namespace std;

int main() {
	
	// 9) Yes, we are defining the overloaded insertion
	// 	operator << for our class in terms of the "regular"
	// 	insertion operator <<

	// 10) Because it would be extremely awkward since for overloaded
	// 	operators as members the first parameter is the calling
	// 	object, but with << and >> the first parameter is of class 
	// 	ostream or istream.

	return 0;
}
