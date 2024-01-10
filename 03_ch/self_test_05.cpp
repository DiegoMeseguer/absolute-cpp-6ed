#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

	srand(time(0));

	for(int i = 0; i < 4; i++)
		cout<<((rand() % 6) + 5)<<endl;

	return 0;
}
