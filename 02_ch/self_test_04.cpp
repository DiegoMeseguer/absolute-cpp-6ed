#include<iostream>
#include<cmath>
using namespace std;

int main() {

	int x;
	bool a, b;

	cout<<"Insert value for x: "<<endl;
	cin>>x;

	a = ((1 < x) && (x < 3));
	b = (pow(x, 2) - (4 * x) + 3) < 0;

	cout<<"a is: "<<a<<endl;
	cout<<"b is: "<<b<<endl;

	return 0;

}
