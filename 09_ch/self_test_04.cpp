#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int cstring_len(const char arr[]);

int main() {
		
	char a[12] = "hello";

	cout<<strlen(a)<<endl;
	cout<<cstring_len(a)<<endl;

	return 0;
}

int cstring_len(const char arr[]) {

	int counter;

	counter = 0;
	while(arr[counter] != '\0') {
		counter++;
	}

	return counter;
}
