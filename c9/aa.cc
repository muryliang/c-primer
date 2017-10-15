#include "my.h"

void func(ostream &i) {
    i << "hehe" << endl;
}

int main() {
    list<int> li{1,1,2,3,4,3,5};
    li.sort();
    li.unique();
    ploop(li);
    return 0;
}
