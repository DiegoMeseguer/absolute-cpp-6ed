#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

int main() {

char charArray[MAX_SIZE], charvar;
int wanted_size, index(0);

cout<<"Enter up to 10 letters\n";
cout<<"Enter a period \".\" to stop inputting letters\n";

while(index < MAX_SIZE) {
	cin>>charvar;
	if(charvar != '.') {
		charArray[index] = charvar;
		index++;
	} 
	else {
		break;
	}

}

wanted_size = index;

for(int i = 0; i < wanted_size; i++) {
	cout<<charArray[i]<<" ";
}
cout<<endl<<endl;

// Let's reverse the array of chars

for(int i = wanted_size - 1; 0 <= i; i--) {
	cout<<charArray[i]<<" ";
}
cout<<endl<<endl;

	return 0;
}
