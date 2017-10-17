#include "my.h"

using namespace std;

struct Ptr {
    const int *ptr;
    size_t idx;
    Ptr(const int *p, size_t i):ptr(p), idx(i) {}
};

vector<int> twoSum(vector<int>& nums, int target) {
    vector<Ptr> vpr;
    for(int i = 0; i < static_cast<int>(nums.size()); ++i) {
        vpr.push_back(Ptr(&nums[i], i));
    }
    sort(vpr.begin(), vpr.end(), [](const Ptr &a, const Ptr &b){ return *a.ptr < *b.ptr;});

    for(int i = 0, j = nums.size() - 1; i < j; ) {
        if (target - *vpr[i].ptr < *vpr[j].ptr)
            --j;
        else if (target - *vpr[i].ptr > *vpr[j].ptr)
            ++i;
        else {
            int idx1 = vpr[i].idx;
            int idx2 = vpr[j].idx;
            return idx1 < idx2 ? vector<int>{idx1, idx2} : vector<int>{idx2,idx1};
        }
    }
    return vector<int>();
}

int main() {
    vector<int> vi{3,2,3};
    auto vec = twoSum(vi, 6);
    for (auto i: vec)
        cout << i << " ";
    cout << endl;
    return 0;
}
