#include "my.h"

int main() {
    vector<int> vi;
    int k;
    int i = 0;

    while (i++ < 10 && cin >> k) {
        vi.push_back(k);
    }
    for(auto iter = vi.begin(); iter != vi.end(); iter++)
        *iter *= 2;

    for(auto vec: vi)
        cout << vec << endl;
    return 0;
}
