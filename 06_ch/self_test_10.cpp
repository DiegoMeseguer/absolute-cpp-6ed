#include <iostream>
#include <string>
using namespace std;

class Temperature
{
public:
	void set(double newDegrees, char newScale);
	//Sets the member variables to the values given as
	//arguments.
	double degrees;
	char scale; //'F' for Fahrenheit or 'C' for Celsius.
};

int main() {
	
	Temperature grados;

	cout<<grados.degrees<<endl;
	cout<<grados.scale<<endl;

	grados.set(30, 'C');

	cout<<grados.degrees<<endl;
	cout<<grados.scale<<endl;

	return 0;
}

void Temperature::set(double newDegrees, char newScale) {

	scale = newScale;
	degrees = newDegrees;
}
