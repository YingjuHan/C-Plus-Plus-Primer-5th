int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

std::vector<int> vec(ia, end(ia));
list<int> lst(vec.begin(), vec.end());

for (auto it = lst.begin(); it != lst.end(); )
{
	if (*it & 0x1)
		it = lit.erase(it);
	else
		++it;
}

for (auto it = vec.begin(); it != vec.end(); )
{
	if (!(*it & 0x1))
		it = vec.erase(it);
	else
		++it;
}