#include <iostream>
#include <string>
using namespace std;

struct ShoeType
{
	char style;
	double price;
	
};

ShoeType discount(ShoeType oldRecord) {

	ShoeType temp;

	temp = oldRecord;
	temp.price = temp.price * 0.90;

	return(temp);
}

int main() {
	
	ShoeType zapato, nuevo_zapato;

	zapato = {'A', 100};

	cout<<zapato.style<<endl;
	cout<<zapato.price<<endl;

	nuevo_zapato = discount(zapato);

	cout<<nuevo_zapato.style<<endl;
	cout<<nuevo_zapato.price<<endl;

	return 0;
}
