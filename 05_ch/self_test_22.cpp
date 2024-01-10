#include <iostream>
using namespace std;

const int X = 4;
const int Y = 5;

void llenar(int arr[][Y], int size, int sub_size) {

	cout<<"Please enter 20 numbers\n";

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < sub_size; j++) {
			cin>>arr[i][j];
		}
		cout<<"End of "<< i + 1 << " row\n";
	}
}

void echo(int arr[][Y], int size, int sub_size) {

	for(int i = 0; i < size; i++) {
		for(int j = 0; j < sub_size; j++) {
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main() {

int a[X][Y];

llenar(a, X, Y);
echo(a, X, Y);

	return 0;
}
