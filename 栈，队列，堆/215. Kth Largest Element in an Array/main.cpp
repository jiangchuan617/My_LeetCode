#include <iostream>
#include <vector>
#include <queue>
using namespace std;


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> Q; // 最小堆
        for(int i=0;i<nums.size();i++){
            if(Q.size()<k)
                Q.push(nums[i]);
            else if(Q.top()<nums[i])
            {
                Q.pop();
                Q.push(nums[i]);
            }
        }
        return Q.top();

    }
};
int main() {
    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(1);
    a.push_back(5);
    a.push_back(6);
    a.push_back(4);
    Solution s;
    cout<<s.findKthLargest(a,2)<<endl;
    return 0;
}