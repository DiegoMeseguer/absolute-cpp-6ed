#include <iostream>
using namespace std;

bool search(const int a[], int numberUsed, int target, int& where) {
	int index = 0;
	bool found = false;

	while((!found) && (index < numberUsed)) {
		if(target == a[index])
			found = true;
		else
			index++;
	}

	if(found)
		where = index;

	return(found);
}


int main() {

	cout<<"Answer in book"<<endl;

	return 0;
}
