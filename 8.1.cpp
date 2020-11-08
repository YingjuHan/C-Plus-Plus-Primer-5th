#include<iostream>

using namespace std;

istream& func(istream &in){
	char c;
	while (in >> c){
		cout << c;
	}
	in.clear();
	return in;
};