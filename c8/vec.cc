#include "my.h"

int main() {
    vector<int> vi;
    auto iter = vi.begin();
    for (int i = 0; i < 20; i++) {
        iter = vi.insert(iter, i);
    }
    for (auto i: vi){
        cout << i << endl;
    }
    return 0;
}

