#include "my.h"

int main() {
    vector<int> vi{1,1,2,2,3,3,4,4,5,5,6,6,7,7};
    set<int> si(vi.begin(), vi.end());
    multiset<int> msi(vi.begin(), vi.end());
    multimap<string, int> mii = {{"a",1},{"a",2},{"b",2},{"b",2},{"c",3},{"c",3}};
    map<string, int> mi = {{"a",1},{"a",2},{"b",2},{"b",2},{"c",3},{"c",3}};

    cout << mii.size() << endl;
    cout << mi.size() << endl;
    return 0;
}

