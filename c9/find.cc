#include "my.h"

int main() {
    vector<int> vi = {1,2,1,3,3,4,5,6};
    cout << count(vi.begin(), vi.end() , 1) << endl;
    auto iter =  find(vi.begin(), vi.end() , 1);
    cout << *(++iter) << endl;
    return 0;
}
