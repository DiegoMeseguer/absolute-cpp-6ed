#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
public:
	void input();
	void output();
	int month;
	int day;	
};

int main() {
	
	DayOfYear dia;

	cout<<dia.month<<endl;
	cout<<dia.day<<endl;

	dia.input();

	cout<<dia.month<<endl;
	cout<<dia.day<<endl;

	return 0;
}

void DayOfYear::input() {

	cout<<"Please insert a month as a number (1-12): ";
	cin>>month;
	cout<<"Please insert the day of the month: ";
	cin>>day;
}
