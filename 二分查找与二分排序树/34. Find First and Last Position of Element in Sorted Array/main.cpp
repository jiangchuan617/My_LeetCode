#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        vector<int> result;
        result.push_back(left_bound(nums, target));
        result.push_back(right_bound(nums, target));
        return result;


    }

private:
    int left_bound(vector<int> &nums, int target) {
        int begin = 0;
        int end = nums.size() - 1;
        int mid = 0;
        while (begin <= end) {
            mid = begin + (end - begin) / 2;
            if (target == nums[mid]) {
                if (mid == 0 || nums[mid - 1] < target) {
                    return mid;
                }
                end = mid - 1;  // ?
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                begin = mid + 1;
            }

        }
        return -1;
    }

    int right_bound(vector<int> &nums, int target) {
        int begin = 0;
        int end = nums.size() - 1;
        int mid = 0;
        while (begin <= end) {
            mid = begin + (end - begin) / 2;
            if (target == nums[mid]) {
                if (mid == nums.size() - 1 || nums[mid + 1] > target) {
                    return mid;
                }
                begin = mid + 1;  // ?
            } else if (target < nums[mid]) {
                end = mid - 1;
            } else if (target > nums[mid]) {
                begin = mid + 1;
            }

        }
        return -1;
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}