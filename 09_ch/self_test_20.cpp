#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	
	char character;

	cout<<"Enter a line of text\n";

	do
	{
		cin.get(character);

		if(!(isupper(character)))
			cout<<character;
	} while(character != '\n');

	return 0;
}
