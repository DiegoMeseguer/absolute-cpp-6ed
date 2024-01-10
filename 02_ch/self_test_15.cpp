#include<iostream>
using namespace std;

int main() {

	int n(0);

	cout<<"Please input a value for n: ";
	cin>>n;

	if(n < 0)
		cout<<"n is less than 0\n";
	else if((0 <= n) && (n <= 100))
		cout<<"n is greater or equal to 0, but less than or equal to 100\n";
	else
		cout<<"n is greater than 100\n";

	return 0;
}
