#include<iostream>
using namespace std;

int main() {

	int dividend, divisor;
	int quotient, remainder;

	cout<<"Insert dividend: ";
	cin>>dividend;
	cout<<"Insert divisor: ";
	cin>>divisor;

	quotient = dividend / divisor;
	remainder = dividend % divisor;

	cout<<"The quotient is "<<quotient<<" and the remainder is "<<remainder<<endl;

	return 0;
}
