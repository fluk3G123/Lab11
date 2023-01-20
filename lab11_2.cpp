#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    string line;
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	dest << "-------------------- BOOM ---------------------" << endl;
	
	while (getline(source, line)) {
	    dest << line << endl;
	}

    dest << "-------------------- HA!! ---------------------" << endl;
    source.close();
    dest.close();
	return 0;
}
