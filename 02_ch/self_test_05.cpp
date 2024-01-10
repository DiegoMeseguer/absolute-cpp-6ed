/* 
This doesn't produce an error because of
C++ short-circuit evaluation
*/


#include <iostream>
using namespace std;

int main() {

	int j;

	j = -1;

	if ((j > 0) && (1/(j + 1) > 10))
		cout << 'i' << endl;
	else
		cout<<"nope"<<endl;

	return 0;
}
