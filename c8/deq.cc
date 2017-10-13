#include "my.h"

int main() {
    string input;
    list<string> ds;
    cout << "input strings " << endl;

    while ( cin >> input ) {
        ds.push_back(input);
    }

    for(auto i: ds) {
        cout << i << endl;
    }
    return 0;
}
