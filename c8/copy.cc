#include "my.h"

int main() {
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89, 100};
    vector<int> vi;
    list<int> li;
    vi.assign(begin(ia), end(ia));
    li.assign(begin(ia), end(ia));
    //should be wrong after delete, will lose iter
    auto liend = li.end();
    cout << "begin " << &*liend <<endl;
    for (auto iter = li.begin(); iter != liend; ++iter){
        if (*iter % 2) {
            cout <<"del " << *iter << endl;
            iter = li.erase(iter);
            --iter;
            cout << &*li.end() <<endl;
        }
        cout << "current " << &*iter << " " << *iter << endl;
    }
    ploop(li);
    for (auto iter = li.begin(); iter != li.end(); ++iter){
        if (! (*iter % 2)) {
            cout <<"del " << *iter << endl;
            iter = li.erase(iter);
            --iter;
        }
    }
    ploop(li);
    return 0;
}

