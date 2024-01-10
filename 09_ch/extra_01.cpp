#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string remove_spaces(string line);
string remove_punctuation(string line);
string line_to_lower(string line);
bool is_palindrome(string line);

int main() {
	
	string sentence;

	cout<<"Please enter a line of text\n";
	getline(cin, sentence);

	//Some tests
	cout<<is_palindrome("Able was I 'ere I saw Elba.")<<endl;
	cout<<is_palindrome("I Love Me, Vol. I.")<<endl;
	cout<<is_palindrome("Madam, I'm Adam.")<<endl;
	cout<<is_palindrome("A man, a plan, a canal, Panama.")<<endl;
	cout<<is_palindrome("Rats live on no evil star.")<<endl;
	cout<<is_palindrome("radar")<<endl;
	cout<<is_palindrome(" racecar")<<endl;
	cout<<is_palindrome(sentence)<<endl;

	return 0;
}

string remove_spaces(string line) {

	string lineMinusSpace("");

	for(int i = 0; i < line.length(); i++) {
		if(!(isspace(line[i])))
			lineMinusSpace += line[i];
	}

	return lineMinusSpace;
}

string remove_punctuation(string line) {

	string lineMinusPunct("");

	for(int i = 0; i < line.length(); i++) {
		if(!(ispunct(line[i])))
			lineMinusPunct += line[i];
	}

	return lineMinusPunct;
}

string line_to_lower(string line) {

	string lineToLower("");

	for(int i = 0; i < line.length(); i++)
		lineToLower += tolower(line[i]);

	return lineToLower;
}

bool is_palindrome(string line) {

	string lineReversed("");

	line = remove_spaces(line);
	line = remove_punctuation(line);
	line = line_to_lower(line);

	for(int i = line.length() - 1; 0 <= i; i--)
		lineReversed += line[i];

	return(line == lineReversed);
}
