#include <iostream>
using namespace std;

int main() {

	int score(0);

	cout<<"Enter the value of score: ";
	cin>>score;

	if(score > 100)
		cout<<"High"<<endl;
	else
		cout<<"Low"<<endl;

	return 0;
}
