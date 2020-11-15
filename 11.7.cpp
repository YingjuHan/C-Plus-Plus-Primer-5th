#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
	map<string, vector<string>> m;
	for (string ln; cout << "Last name:\n", cin >> ln && ln != "@q"; )
		for (string cn; cout << "|-Children's names:\n", cin >> cn && cn != "@q";)
			m[ln].push_back(cn);
	return 0;
}