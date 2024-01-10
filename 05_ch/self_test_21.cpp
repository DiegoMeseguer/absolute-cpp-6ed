#include <iostream>
using namespace std;

int main() {

int a[4][5];

cout<<"Please enter 20 numbers\n";

for(int i = 0; i < 4; i++) {
	for(int j = 0; j < 5; j++) {
		cin>>a[i][j];
	}
	cout<<"End of "<< i + 1 << " row\n";
}

for(int i = 0; i < 4; i++) {
	for(int j = 0; j < 5; j++) {
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}

	return 0;
}
