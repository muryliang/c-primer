#include "my.h"

void print(vector<int> &k) {
    for (auto i: k)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> a;
    vector<int> b(20, 30);
    array<int, 5> c{1,2,3,4};
    for (auto i: c) {
        cout << i << " ";
    }
    cout << c.data() << endl;
    cout << endl;
    return 0;
}
