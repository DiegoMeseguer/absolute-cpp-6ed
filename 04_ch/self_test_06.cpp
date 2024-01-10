#include <iostream>
using namespace std;

void addTax(double taxRate, double& cost) {
	double decPercent;

	decPercent = taxRate / 100;
	cost = cost + (cost * decPercent);
}

int main() {

	double x, y;

	cout<<"Please enter tax rate and cost of item:\n";
	cin>>x>>y;

	addTax(x, y);

	cout<<"The final cost is $"<<y<<" after taxes.\n";

	return 0;
}
