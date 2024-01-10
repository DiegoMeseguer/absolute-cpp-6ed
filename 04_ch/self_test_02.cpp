#include <iostream>
using namespace std;

double totalInches(double feet, double inches) {
	inches = 12 * feet + inches;

	return inches;
}

int main() {

	double pies, pulgadas;

	cout<<"Please enter a length expressed in feet and inches:\n";
	cin>>pies>>pulgadas;

	cout<<"Resultado: "<<totalInches(pies, pulgadas)<<endl;

	return 0;
}
