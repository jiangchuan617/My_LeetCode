#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int coinChange(vector<int> &coins, int amount) {
        vector<int> dp;
        for (auto i = 0; i <= amount; i++) {
            dp.push_back(-1);  // 最初所有金额的最优解为-1
        }
        dp[0] = 0;
        for (auto i = 0; i <= amount; i++) {
            for (auto j = 0; j < coins.size(); j++) {
                if (i - coins[j] >= 0 && dp[i - coins[j]] != -1) {
                    if (dp[i] == -1 || dp[i] > dp[i - coins[j]] + 1) {
                        dp[i] = dp[i - coins[j]] + 1;
                    }
                }
            }
        }
        return dp[amount];

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}