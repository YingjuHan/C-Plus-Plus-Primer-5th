#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

inline bool predicate(const std::string &s) 
{ 
    return s.size() >= 5; 
}

int main()
{
	auto v = std::vector<string>{ "a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa" };
	auto pivot = partition(v.begin(), v.end(), predicate);
	for (auto it = v.cbegin(); it != pivot; ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}