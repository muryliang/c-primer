#include "my.h"

int main() {
    vector<int> vi = {1,2,3,4,5,6};
    vi.erase(vi.begin(), vi.begin());
    for (auto i: vi) {
        cout << i << endl;
    }
    
    return 0;
}
