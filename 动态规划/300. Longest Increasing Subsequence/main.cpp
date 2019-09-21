#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int> &nums) {
        int size = nums.size();
        if (size == 0) {
            return 0;
        }
        vector<int> dp(size, 1);

        int LIS = 1;
        for (int i = 1; i < size; i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j] && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                }
            }
            if (LIS < dp[i]) {
                LIS = dp[i];
            }
        }
        return LIS;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}