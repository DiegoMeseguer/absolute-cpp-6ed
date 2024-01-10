#include <iostream>
using namespace std;

int main() {

	int arr[20];

	for(int i = 0; i < 20; i++) {
		cout<<"Please enter a value:\n";
		cin>>arr[i];
	}

	cout<<"Your array elements are:\n";

	for(int i = 0; i < 20; i++) {
		cout<<arr[i]<<endl;
	}

	cout<<"Another way of doing it\n";

	// Using the new C++11 range-base for loop

	for(int& x : arr) {
		cout<<"Please enter a value:\n";
		cin>>x;
	}

	for(int x : arr)
		cout<<x<<" ";

	cout<<endl;

	return 0;
}
