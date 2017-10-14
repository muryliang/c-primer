#include "my.h"

int main() {
//    vector<int> vi = {1,2,3,4,5};
    vector<double> vi = {1.1,2,3,4,5};
    cout << accumulate(vi.cbegin(), vi.cend(), 0.0) << endl;
    return 0;
}

