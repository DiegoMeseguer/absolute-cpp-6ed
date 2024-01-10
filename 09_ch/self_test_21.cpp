#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void newLine();
//Discards all the input remaining on the current input line.
//Also discards the '\n' at the end of the line.

int main() {

	char character;
	
	cout<<"Enter a line of text\n";
	cin.get(character);
	cout<<character;
	newLine();
	cin.get(character);
	cout<<character;	


	cout<<endl;

	return 0;
}

void newLine() {

	cin.ignore(100000, '\n');

}
