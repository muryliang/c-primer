#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main() {
    string s1, st;
    while (cin >> s1) 
        st = st + s1 + " ";
    cout << st << endl;
    return 0;
}
