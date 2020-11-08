#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

struct PersonInfo {
	string name;
	std::vector<string> phones;
};

int main()
{
	string line, word;
	std::vector<PersonInfo> people;
	istringstream record(line);
	while (getline(cin, line)){
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
			info.phones.push_back(word);
		people.push_back(info);
	}

	for (auto &p : people)
	{
		cout << p.name << " ";
		for (auto &s : p.phones)
			cout << s << " ";
		cout << endl;
	}
	return 0;
}