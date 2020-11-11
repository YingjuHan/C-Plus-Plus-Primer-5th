#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>

using namespace std;

int main()
{
	std::list<string> l = {"aa", "aaa"};
	cout << count(l.cbegin(), l.cend(), "aa") << endl;
	return 0;
}