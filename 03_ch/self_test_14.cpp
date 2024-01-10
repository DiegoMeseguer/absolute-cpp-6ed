#include <iostream>
using namespace std;

bool isDigit(char a) {
	if(('0' <= a) && (a <= '9'))
		return(true);
	else
		return(false);
}

int main() {
	char character;

	cout<<"Please enter ONE character\n";
	cin>>character;

	if(isDigit(character))
		cout<<"Your character is a decimal digit\n";
	else
		cout<<"Your character is not a decimal digit\n";

	return 0;
}
