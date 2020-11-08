std::list<int>      li{ 1, 2, 3, 4, 5 };
std::vector<int>    vec2{ 1, 2, 3, 4, 5 };

std::cout << (std::vector<int>(li.begin(), li.end()) == vec2 ? "true" : "false") << std::endl;

