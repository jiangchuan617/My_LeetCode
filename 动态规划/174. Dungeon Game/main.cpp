#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int calculateMinimumHP(vector<vector<int>> &dungeon) {
        if (dungeon.size() == 0) {
            return 0;
        }
        int m = dungeon.size();
        int n = dungeon[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));
        // 先定位最后一个元素
        dp[m - 1][n - 1] = max(1, 1 - dungeon[m - 1][n - 1]);
        // 对最后一行和最后一列进行标定
        for (int j = n - 2; j >= 0; j--) {
            dp[m - 1][j] = max(1, dp[m - 1][j + 1] - dungeon[m - 1][j]);
        }
        for (int i = m - 2; i >= 0; i--) {
            dp[i][n - 1] = max(1, dp[i + 1][n - 1] - dungeon[i][n - 1]);
        }
        // 开始递归
        for (int i = m - 2; i >= 0; i--) {
            for (int j = n - 2; j >= 0; j--) {
                int dp_min = min(dp[i + 1][j], dp[i][j + 1]);
                dp[i][j] = max(1, dp_min - dungeon[i][j]);
            }
        }
        return dp[0][0];


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}