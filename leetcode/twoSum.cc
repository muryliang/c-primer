#include "my.h"

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> um;
    um.reserve(nums.size());
    for(int i = 0; i < static_cast<int>(nums.size()); ++i)
        um.insert({nums[i], i});

    for(int i = 0; i < static_cast<int>(nums.size()); ++i) {
        auto iter = um.find(target - nums[i]);
        if (iter != um.end() && iter->second != i )
            return vector<int>{i, iter->second};
    }
    return vector<int>();
}

int main() {
    vector<int> vi{3,2,4};
    auto vec = twoSum(vi, 6);
    for (auto i: vec)
        cout << i << " ";
    cout << endl;
    return 0;
}
