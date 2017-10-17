#include "my.h"

int main() {
    vector<int> vi{1,2,3,4,5,6};
    allocator<int> ai;
    auto p = ai.allocate(vi.size()*2);
    auto q = uninitialized_copy(vi.begin(), vi.end(), p);
    uninitialized_fill_n(q, vi.size(), 20);
    return 0;
}
