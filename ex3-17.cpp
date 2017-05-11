#include <iostream>
#include <vector>

using std::string;
using std::vector;

int main(void)
{
    string s;
    vector<string> svec;

    while (std::cin >> s) {
        if (svec.size() > 5) {
            break;
        }
        for (auto &c : s) {
            c = (char) toupper(c);
        }
        svec.push_back(s);
    }

    for (auto v : svec) {
        std::cout << v << std::endl;
    }

    return 0;
}
