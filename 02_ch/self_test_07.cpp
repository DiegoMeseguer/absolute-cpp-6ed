#include <iostream>
using namespace std;

int main() {

	double savings(0), expenses(0);

	cout<<"Enter the value of savings: ";
	cin>>savings;

	cout<<"Enter the value of expenses: ";
	cin>>expenses;

	if(savings >= expenses) {
		cout<<"Solvent\n";
		savings = savings - expenses;
		expenses = 0;
		cout<<"Your new savings are: "<<savings<<endl;
	} else {
		cout<<"Bankrupt\n";
	}


	return 0;
}
