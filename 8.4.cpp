#include <iostream>
#include <string>

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
	ifstream ifs(fileName);
	if(ifs)
	{
		string s;
		while(getline(ifs, s))
			vec.push_back(s);
	}
}
