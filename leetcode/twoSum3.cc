#include "my.h"

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unique_ptr<int*[]> vpr(new int*[nums.size()]);
    for(int i = 0; i < static_cast<int>(nums.size()); ++i) {
        vpr[i] = &nums[i];
    }
    sort(&vpr[0], &vpr[0]+nums.size(), [](const int* a, const int * b){return *a< *b;});

    for(int i = 0, j = nums.size() - 1; i < j; ) {
        if (target - *vpr[i] < *vpr[j])
            --j;
        else if (target - *vpr[i] > *vpr[j])
            ++i;
        else {
            int idx1 = vpr[i] - &nums[0];
            int idx2 = vpr[j] - &nums[0];
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
