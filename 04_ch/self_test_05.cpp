#include <iostream>
using namespace std;

void zeroBoth(int& x, int& y) {
	x = 0;
	y = 0;
}

int main() {

	int x, y;

	cout<<"Please enter two integers:\n";
	cin>>x>>y;

	zeroBoth(x, y);

	cout<<"Result is: "<<x<<" "<<y<<endl;

	return 0;
}
