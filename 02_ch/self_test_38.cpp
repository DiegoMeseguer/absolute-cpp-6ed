/*
	The variable moreToRead is not set to false until we attempt 
	to read past the last item in the file. This means that we will 
	output an extra newline on the last loop iteration. We can address 
	this by outputting the value read first and then reading 
	the next string (and possibly end of file) at the end of the loop 
	iteration. This also handles the case where the file is empty.
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {

	fstream inputStream;
	string text;

	inputStream.open("scores.txt");
	
	bool moreToRead = static_cast<bool>(inputStream >> text);
	while (moreToRead)
	{
    	cout << text << endl;
		moreToRead = static_cast<bool>(inputStream >> text); 
	}

	return 0;
}
