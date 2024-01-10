#include <iostream>
using namespace std;

const int SIZE = 10;

void oneMore(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		arr[i] = arr[i] + 1;
	}
}


int main() {

	int arr[SIZE];

	for (int x : arr)
		cout<<x<<" ";
	cout<<endl;

	oneMore(arr, SIZE);

	for (int x : arr)
		cout<<x<<" ";
	cout<<endl;

	return 0;
}
