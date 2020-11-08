#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;

istream& func(istream &in){
	char c;
	while (in >> c){
		cout << c;
	}
	in.clear();
	return in;
};

int main(int argc, char **argv){
	istream& testin = func(cin);
	cout << testin.rdstate() << endl;
	return 0;
};