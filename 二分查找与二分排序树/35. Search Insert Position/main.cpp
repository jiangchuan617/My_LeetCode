#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target) {
        int index = -1; // 最终返回的元素下标
        int begin = 0;
        int end = nums.size()-1;
        int mid = 0;
        while(index == -1){
            mid = begin +(end-begin)/2;
            if (target == nums[mid]){
                index = mid;
            }
            else if(target<nums[mid]){
                if (mid==0 || target>nums[mid-1]){
                    index = mid;
                }
                end = mid-1;
            }
            else if(target>nums[mid]){
                if(mid==nums.size()-1 || target<nums[mid+1]){
                    index = mid+1;
                }
                begin = mid+1;
            }
        }
        return index;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}