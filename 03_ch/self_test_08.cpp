#include <iostream>
using namespace std;

int suma(int x, int y, int z) {
	int result;
	result = x + y + z;
	return(result);
}

int main() {
	cout << suma(10, 20, 30) << endl;
	return 0;
}
