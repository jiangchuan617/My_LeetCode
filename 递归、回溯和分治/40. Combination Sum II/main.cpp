#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> item;
        set<vector<int>> res_set;
        sort(candidates.begin(), candidates.end());
        generate(0, candidates, result, item, res_set,0,target);
        return result;
    }

private:
    void generate(int i, vector<int> &nums,
            vector<vector<int>> &result,
            vector<int> &item,
            set<vector<int>> &res_set,
            int sum,int target) {  // sum是当前子集元素之和
        if (sum>target || i >= nums.size()) {  // 当元素选完，或者sum超过target
            return;
        }
        sum+=nums[i];
        item.push_back(nums[i]);
        // 当item中的元素和为target时候，且结果未添加
        if (target== sum && res_set.find(item) == res_set.end()) {
            result.push_back(item);
            res_set.insert(item);
        }
        generate(i + 1, nums, result, item, res_set,sum,target);
        sum -= nums[i];  // 回溯的时候吧nums[i]从item中删除
        item.pop_back();
        generate(i + 1, nums, result, item, res_set,sum,target);
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}