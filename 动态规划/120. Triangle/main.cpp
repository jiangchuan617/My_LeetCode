#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size=triangle.size();
        if (size == 0) {
            return 0;
        }
        vector<vector<int>> dp(size,vector<int>(size,0));

        // dp的最后一排填上元素
        for(int i=0;i<size;i++)
        {
            dp[size-1][i]=triangle[size-1][i];
        }
        for(int i=size-2;i>=0;i--)
        {
            for(int j=0;j<triangle[i].size();j++)
            {
                dp[i][j]=triangle[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return dp[0][0];
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}