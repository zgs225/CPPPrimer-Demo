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

    string m("Hello world");
    int i = 0;
    while (i < m.size()) {
        m[i] = 'X';
        i++;
    }
    cout << m << endl;
}