#include <iostream>
#include <string>
using namespace std;

struct ShoeType
{
	char style;
	double price;
	
};

void readShowRecord(ShoeType& newShoe) {

	cout<<"Please insert the shoe style: ";
	cin>>newShoe.style;
	cout<<"Please insert the shoe price: ";
	cin>>newShoe.price;

}

int main() {
	
	ShoeType mi_zapato;

	cout<<mi_zapato.style<<endl;
	cout<<mi_zapato.price<<endl;

	readShowRecord(mi_zapato);

	cout<<mi_zapato.style<<endl;
	cout<<mi_zapato.price<<endl;	

	return 0;
}
