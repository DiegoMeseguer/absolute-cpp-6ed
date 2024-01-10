#include <iostream>
using namespace std;

bool inOrder(int x, int y, int z) {
	bool result;
	if((x <= y) && (y <= z))
		result = true;
	else
		result = false;

	return(result);
}

int main() {

	int num1, num2, num3;

	cout<<"Please insert three numbers: "<<endl;
	cin>>num1>>num2>>num3;

	if(inOrder(num1, num2, num3))
		cout<<"Your numbers are in ascending order"<<endl;
	else
		cout<<"Your numbers are not in ascending order"<<endl;

	return 0;
}
