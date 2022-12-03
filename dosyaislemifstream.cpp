#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	ofstream myWriteFile("file.txt");
	myWriteFile << "burhan mutlu";
	myWriteFile.close();
	
	string myText;
	ifstream myReadFile("file.txt");
	while (getline (myReadFile, myText)) {
		cout << myText;
	}
	myReadFile.close();
}
/*
   Class				Description
ofstream -->	Creates and writes to files
ifstream -->	Reads from files
fstream	--> 	A combination of ofstream and ifstream: creates, reads, and writes to files
*/

