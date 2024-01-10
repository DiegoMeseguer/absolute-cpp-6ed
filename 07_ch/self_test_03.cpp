#include <iostream>
#include <string>
using namespace std;

void bank_account();

int main() {
	
	bank_account();

	return 0;
}

void bank_account() {

		string balance;
		int dollarpart, pointpos;
		char point, firstdec, seconddec;

		cout<<"Enter account balance $";
		cin>>balance;

		dollarpart = stoi(balance);
		
		pointpos = balance.find(".");
		point = balance[pointpos];
		firstdec = balance[pointpos + 1];
		seconddec = balance[pointpos + 2];

		cout<<"int -> "<<dollarpart<<endl;
		cout<<"chars -> "<<point<<" "<<firstdec<<" "<<seconddec<<endl;
}
