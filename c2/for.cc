#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::endl;
using std::cin;
using std::cout;

int main() {
    string s;
    cin >> s;
    for (char c : s) 
        if ( !ispunct(c) )
            cout << c;
    cout << endl;
    return 0;
}
