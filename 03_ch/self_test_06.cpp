#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

	int seed(0);
	double numero(0);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout<<"Please enter a seed value: ";
	cin>>seed;

	srand(seed);

	for(int i = 0; i < 10; i++) {
		numero = ((RAND_MAX - rand()) / static_cast<double>(RAND_MAX));
		cout<< numero << endl;
	}

	return 0;
}
