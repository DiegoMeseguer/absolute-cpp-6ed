#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

int main() {

int numberArray[MAX_SIZE], wanted_size, index(0), intvar(0);

cout<<"Enter up to 10 non-negative numbers\n";
cout<<"Enter -1 to stop inputting numbers\n";

while(index < MAX_SIZE) {
	cin>>intvar;
	if(0 <= intvar) {
		numberArray[index] = intvar;
		index++;
	} 
	else {
		break;
	}

}

wanted_size = index;

for(int i = 0; i < wanted_size; i++) {
	cout<<numberArray[i]<<" ";
}
cout<<endl<<endl;

cout<<"Using another loop"<<endl<<endl;

for(int x : numberArray)
	cout<<x<<" ";
cout<<endl;

	return 0;
}
