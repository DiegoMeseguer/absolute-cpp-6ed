#include <iostream>
using namespace std;

int main() {

	int temp(0), press(0);

	cout<<"Enter the temperature: ";
	cin>>temp;

	cout<<"Enter the pressure: ";
	cin>>press;

	if((100 <= temp) || (200 <= press)) {
		cout<<"Warning!\n";
	} else {
		cout<<"Ok\n";
	}

	return 0;
}
