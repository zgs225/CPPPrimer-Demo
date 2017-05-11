#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main() {
    string s("Hello world");
    for (auto &c : s)
        c = 'X';
    cout << s << endl;
}