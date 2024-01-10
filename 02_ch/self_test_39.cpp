#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	string name;
	fstream inputStream;
	int num_entries(0), score(0);

	inputStream.open("scores.txt");

	inputStream >> num_entries;

	for(int i = num_entries; 0 < i; i--) {
		inputStream >> name >> score;
		cout << name << " - " << score << endl;
	}

	inputStream.close();

	return 0;
}
