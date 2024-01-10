#include<iostream>
#include <string>
using namespace std;

int main() {

	int x, y, z;
	auto a(0);
	auto b(0);
	auto c(0);
	auto d(0);

	//First Expression
	a = 3 * x;

	// Second Expression
	b = (3 * x) + y;

	//Third Expression
	c = (x + y)/7;

	//Fourth Expression
	d = ((3 * x) + y)/(z + 2);


	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<d<<endl;

	return 0;
}
