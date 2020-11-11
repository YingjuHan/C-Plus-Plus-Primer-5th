#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>

using namespace std;

template <typename Sequence>

inline ostream& println(Sequence const& seq)
{
	for (auto const& elem : seq)
		cout << elem << " ";
	return cout << endl;
}

inline bool isShorter(string const& s1, string const& s2)
{
	return s1.size() < s2.size();
}

void elimDups(std::vector<string> &vs)
{
	sort(vs.begin(), vs.end());
	auto new_end = unique(vs.begin(), vs.end());
	vs.erase(new_end, vs.end());
}

int main()
{
	vector<string> v{"1234", "1234", "1234", "Hi", "alan", "wang"};
	elimDups(v);
	stable_sort(v.begin(), v.end(), isShorter);
	println(v);
	return 0;
}