#include "my.h"

int main() {
    deque<int> vi{1,2,3,4,5,6,7};
    auto bi = inserter(vi, vi.begin()+2);
    *bi = 20;
    *bi = 21;
    ploop(vi);
    return 0;
}
