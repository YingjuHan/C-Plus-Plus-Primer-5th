#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	std::vector<int> v = {1,2,3,4};
	cout << accumulate(v.cbegin(), v.cend(), 0) << endl;
	return 0;
}