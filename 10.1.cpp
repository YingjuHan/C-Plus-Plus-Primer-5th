#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> v = {1,2,3,4,5,3};
	cout << std::count(v.cbegin(), v.cend(), 3) << endl;
	return 0;
}