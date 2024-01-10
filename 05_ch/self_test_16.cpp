#include <iostream>
using namespace std;

const int SIZE = 5;

int outOfOrder(double arr[], int size) {

	int check(-1);

	for(int i = 0; i < size - 1; i++) {
		if(arr[i + 1] < arr[i]) {
			check = i + 1;
			break;
		}
	}

	return(check);
}

int main() {

	double lista[SIZE] = {1.2, 1.2, 1.2, 1.2, 1.2};
	int orden;

	for(double x : lista)
		cout<<x<<" ";
	cout<<endl;

	orden = outOfOrder(lista, SIZE);

	if(orden == -1)
		cout<<"El array esta ordenado de menor a mayor\n";
	else
		cout<<"El array esta desordenado, primer caso de desorden en "
			<<"el indice "<<orden<<endl;

	return 0;
}
