#include "my.h"

int main() {
    vector<int> vi = {1,2,3,4,5};
    ploop(vi);
    cout << endl;
    fill_n(vi.begin(), vi.size(), 0);
    ploop(vi);
    cout << endl;
    return 0;
}
