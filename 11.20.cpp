
// 11.3 单词计数程序
// #include <string>
// #include <map>
// #include <iostream>

// using namespace std;

// int main(){
//     map<string, int> word_count;
//     string tmp;
//     while (cin >> tmp){
//         word_count[tmp] += 1;
//     }
//     for (const auto &elem : word_count)
// 		std::cout << elem.first << " : " << elem.second << endl;
// 	return 0;
// }


#include <string>
#include <map>
#include <iostream>

using namespace std;

int main()
{
	map<string, int> word_count;
	for (string word; cin >> word; )
	{
		auto result = word_count.insert({word, 1});
		if (!result.second)
			++result.first->second;
		if (word == "exit")
			break;
	}
	for (auto const &count: word_count)
	{
		cout << count.first << " " << count.second << ((count.second > 1)? " times\n": "time\n");
	}
return 0;
}
//使用`insert`更容易阅读和编写。`insert`有返回值，可以明确的体现出插入操作的结果