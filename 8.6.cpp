#include<fstream>
#include<iostream>

using namespace std;

int main(int argc, char **argv)
{
	ifstream input(argv[1]);

	Sale_data total;
	if (read(input, total)){
		Sale_data trans;
		while(read(input, trans)){
			if(total.isbn() == trans.isbn()){
				total.combine(trans);
			}
			else{
				print(cout, total);
				total = trans;
			}
		}
		print(cout, total) << endl;
	}else{
		cerr<<"No data?!"<<endl;
	}
	return 0;
}