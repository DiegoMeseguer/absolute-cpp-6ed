#include <iostream>
using namespace std;

bool even(int x) {
	if(x % 2 == 0)
		return(true);
	else
		return(false);
}

int main() {

	int num;

	cout<<"Please insert a number"<<endl;
	cin>>num;

	if(even(num))
		cout<<"Number is even"<<endl;
	else
		cout<<"Number is odd"<<endl;

	return 0;
}
