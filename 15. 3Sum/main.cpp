#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int> > res;
        sort(nums.begin(), nums.end(), less<int>());
        if (nums.empty() || nums.front() > 0 || nums.back() < 0)
            return res;

        for (int i = 0; i < nums.size(); i++) {
            int fix = nums[i];
            if (fix > 0) break;
            if (i > 0 && fix == nums[i - 1]) continue;
            //对撞指针
            int l = i + 1, r = nums.size() - 1;
            while (l < r) {
                if (nums[l] + nums[r] + fix < 0) {
                    ++l;
                } else if (nums[l] + nums[r] + fix > 0) {
                    --r;
                } else {
                    res.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                    while (l < r && nums[r] == nums[r + 1]) {
                        r--;
                    }
                }
            }
        }

        return res;
    }
};

int main() {
    vector<int> a;
    a.push_back(0);
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);
    a.push_back(5);
    Solution s;
    s.threeSum(a);


    std::cout << "Hello, World!" << std::endl;
    return 0;
}