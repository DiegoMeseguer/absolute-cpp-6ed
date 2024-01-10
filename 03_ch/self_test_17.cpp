#include <iostream>
using namespace std;

void mostrar_mult(int x, int y, int z) {
	cout<< x * y * z <<endl;
}

int main() {

	int x, y, z;

	cout<<"Please enter three numbers:\n";
	cin>>x>>y>>z;

	mostrar_mult(x, y, z);

	return 0;
}
