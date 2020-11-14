#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> l = { 1, 2, 0, 4, 5, 6, 7, 0, 9 };
	auto it = find(l.crbegin(), l.crend(), 0);
	cout << distance(it, l.crend()) << endl; // 返回位置，第1个为位置0
	return 0;
}