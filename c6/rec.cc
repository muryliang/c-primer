#include "my.h"

void pv(vector<int>::iterator cur, vector<int>::iterator end);
int main() {
    vector<int> vi = {1,2,3,4,5,6};
    pv(vi.begin(), vi.end());
    return 0;
}

void pv(vector<int>::iterator cur, vector<int>::iterator end) {
    if (cur != end) {
        cout << *cur << endl;
        return pv(++cur, end);
    } else {
        return;
    }
}
