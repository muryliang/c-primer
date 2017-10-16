#include "my.h"

bool comp(const list<int>::iterator &one, const list<int>::iterator &two) {
    return *one > *two;
}

int main() {
    list<int> vi{1,2,3,4,5,6,7,8,9};
    map<list<int>::iterator, int, decltype(comp)*> mvi(comp);

    for(auto iter=vi.begin(); iter != vi.end(); iter++) {
        mvi[iter] = *iter;
    }

    for(auto k: mvi) {
        cout << *k.first << " " << k.second << endl;
    }
    return 0;
}
        
