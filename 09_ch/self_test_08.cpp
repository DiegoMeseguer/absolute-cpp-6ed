#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	
	char ourString[15] = "Hi there!";
	int counter;

	counter = 0;
	while(ourString[counter] != '\0' && counter < 15) {
		ourString[counter] = 'X';
		counter++;
	}

	cout<<strlen(ourString)<<endl;

	for(char x : ourString)
		cout<<x<<" ";
	cout<<endl;

	return 0;
}
