#include <iostream>
#include <string>
#include <list>

using namespace std;

void helper(list<string> &words)
{
	words.sort();
	words.unique();
}

int main()
{
	list<string> l = { "aa", "aa", "aa", "aa", "aasss", "aa" };
	helper(l);
	for (const auto& e : l)
		cout << e << " ";
	cout << endl;
	return 0;
}