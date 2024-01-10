#include<iostream>
using namespace std;

int main() {

	double theNumber;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

	cout<<"Please enter a number with decimal part: "<<endl;
	cin>>theNumber;

	cout<<"Indeed, your number is: "<<theNumber<<endl;

	return 0;
}
