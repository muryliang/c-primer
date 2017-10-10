#include "my.h"

void sum(const string &s, initializer_list<int> ls, const string &q) {
    cout << "the string is: " << s + " " + q << endl;
    int sum = 0;
    for (auto i: ls) {
        sum += i; 
    }
    cout << "sum is: " << sum << endl;
}

int main() {
    sum("hehe", {1,2,3,4,5,6,7}, "hello");
    return 0;
}
