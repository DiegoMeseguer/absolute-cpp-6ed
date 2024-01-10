#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	string name, max_name;
	fstream inputStream;
	int num_entries(0), score(0);
	double max_score(0);

	inputStream.open("scores.txt");

	inputStream >> num_entries;

	for(int i = num_entries; 0 < i; i--) {
		inputStream >> name >> score;
		if(max_score < score) {
			max_score = score;
			max_name = name;
		}
	}

	cout << max_name << " - " << max_score << endl;

	inputStream.close();

	return 0;
}
