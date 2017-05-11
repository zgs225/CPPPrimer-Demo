#include <vector>
#include <iostream>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    vector<int> ivec;
    int i;

    while(cin >> i) {
        ivec.push_back(i);
    }

    for (auto v = ivec.begin(); v != ivec.end(); ++v) {
        cout << *v << " ";
    }
    cout << endl;

    return 0;
}
