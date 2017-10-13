#include "my.h"

int main() {
    list<int> li;

    for (int i = 0; i < 30; ++i)
        li.push_back(i);

    deque<int> dodd, deven;

    for (auto i: li){
        if (i % 2) { //odd
            dodd.push_back(i);
        } else {
            deven.push_back(i);
        }
    }
    cout <<"odd"<<endl;
    for (auto i:dodd) {
        cout << i << " ";
    }
    cout << endl;
    cout <<"even"<<endl;

    for (auto i:deven) {
        cout << i << " ";
    }
    cout << endl;
}
