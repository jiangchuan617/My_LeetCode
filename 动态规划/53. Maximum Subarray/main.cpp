#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        vector<int> dp(nums.size(),0);
        dp[0] = nums[0];
        int max_res = nums[0];
        for (int i =1;i<nums.size();i++){
            if(dp[i-1]>0){
                dp[i] = dp[i-1]+nums[i];
            }
            else{
                dp[i] = nums[i];
            }
            if (max_res<dp[i]){
                max_res = dp[i];
            }
        }
        return max_res;

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}