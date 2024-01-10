#include <iostream>
using namespace std;

int main() {

	int exam(0), programsDone(0);

	cout<<"Enter the grade of exam: ";
	cin>>exam;

	cout<<"Enter the number of programs done: ";
	cin>>programsDone;

	if((60 <= exam) && (10 <= programsDone)) {
		cout<<"Passed\n";
	} else {
		cout<<"Failed\n";
	}

	return 0;
}
