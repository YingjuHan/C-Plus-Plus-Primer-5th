using namespace std;

bool find(vector<int>::const_iterator begin, vector<int>::const_iterator end, int num)
{
	while (begin != end)
	{
		if (*begin == num)
			return begin;
		++begin;
	}
	return end;
}