#include<iostream>
#include<cmath>
using namespace std;

int main() {

	cout<<sqrt(1)<<endl;
	cout<<sqrt(2)<<endl;
	cout<<sqrt(3)<<endl;
	cout<<sqrt(4)<<endl;
	cout<<sqrt(5)<<endl;
	cout<<sqrt(6)<<endl;
	cout<<sqrt(7)<<endl;
	cout<<sqrt(8)<<endl;
	cout<<sqrt(9)<<endl;
	cout<<sqrt(10)<<endl;

	cout<<"Now with a for loop"<<"\n";
	for (int i = 0; i < 10; ++i) {
	cout<<sqrt(i+1)<<"\n";
	}

	return 0;
}
