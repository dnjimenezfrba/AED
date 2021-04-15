//============================================================================
// Name        : 00-Hello.cpp
// Author      : Nicolas Jimenez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string hello = "!!!Hello World!!!";
	cout << hello << endl;
	ofstream myfile("output.txt");
	myfile << hello;
	myfile.close();
	return 0;
}
