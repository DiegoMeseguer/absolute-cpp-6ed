#include <iostream>
using namespace std;

char signo(double x) {
	char result;
	if(x > 0)
		result = 'P';
	else
		result = 'N';

	return(result);
}

int main() {
	double number(0);

	cout<<"Please insert a number: ";
	cin>>number;

	cout<<"Your number is of sign: "<<signo(number)<<endl;

	return 0;
}
