#include <iostream>
#include <string>

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
	ifstream ifs(fileName);
	if(ifs)
	{
		string s;
		while(ifs >> s)
			vec.push_backs(s);
	}
}
