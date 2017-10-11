#include "my.h"

void pv(vector<int>::iterator cur, vector<int>::iterator end);
int main() {
    vector<int> vi = {1,2,3,4,5,6};
    pv(vi.begin(), vi.end());
    return 0;
}

void pv(vector<int>::iterator cur, vector<int>::iterator end) {
#ifdef NDEBUG
    cout << " current function " << __func__
        << " in file " << __FILE__ 
        << " line " << __LINE__ 
        << " date  " << __DATE__ 
        << " time " << __TIME__ << endl;
#endif
    if (cur != end) {
        cout << *cur << endl;
        return pv(++cur, end);
    } else {
        return;
    }
}
