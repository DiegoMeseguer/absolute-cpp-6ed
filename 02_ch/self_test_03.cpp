#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int x;
	bool a, b;

	cout<<"Insert value for x: "<<endl;
	cin>>x;

	a = ((x < -1) || (2 < x));
	b = (pow(x, 2) - x - 2) > 0;

	cout<<"a is: "<<a<<endl;
	cout<<"b is: "<<b<<endl;

	return 0;

}
