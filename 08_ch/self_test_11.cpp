#include <iostream>
#include <string>

using namespace std;
                    
class Percent
{
public:
	friend bool operator ==(const Percent& first,
						const Percent& second);
	friend bool operator <(const Percent& first,
						const Percent& second);
	Percent( );
	friend istream& operator >>(istream& inputStream,
								Percent& aPercent); 

	friend ostream& operator <<(ostream& outputStream,
								const Percent& aPercent); 
	//There would normally also be other members and friends.
private:
	int value;

	
};

int main() {


	Percent half, quarter;

	cout<<"We have a "<<half<<" percentage."<<endl;

	cin>>half>>quarter;

	cout<<"We have a new "<<half<<" percentage."<<endl;
	cout<<"We have a new "<<quarter<<" percentage."<<endl;

	return 0;
}

Percent::Percent()
				: value(50)
{}

ostream& operator <<(ostream& outputStream, const Percent& aPercent) {

	if(aPercent.value < 0) {
		outputStream<<"Error, percentage cannot be negative\n";
		exit(1);
	}

	outputStream<<aPercent.value<<"%";

	return outputStream;
}

istream& operator >>(istream& inputStream, Percent& aPercent) {

	string percentage;

	inputStream>>percentage;

	if(percentage[percentage.length() - 1] == '%')
		percentage = percentage.erase((percentage.length() - 1), 1);
	else {
		cout<<"Missing % symbol"<<endl;
		exit(1);
	}

	aPercent.value = stoi(percentage);

	return inputStream;
}

// This also works
// istream& operator >>(istream& inputStream, Percent& aPercent) {
	
// 	char sign;

// 	inputStream>>aPercent.value;
// 	inputStream>>sign;
	
// 	return inputStream;
// }
