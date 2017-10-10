#include "my.h"

int main() {
    vector<int> iv;
    int a;
    while (cin >> a) {
        iv.push_back(a);
    }
    /*
    for (decltype(iv.size()) index = 0; index < iv.size()-1; index++) {
        cout << iv[index] + iv[index + 1] << endl;
    }
    */
    for (decltype(iv.size()) index = 0; index <= (iv.size()-1)/2; index++) {
        cout << iv[index] + iv[iv.size()-1-index] << endl;
    }

    return 0;
}
