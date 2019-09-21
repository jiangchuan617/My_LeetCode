#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int> &nums) {
        if (nums.size() < 2) {
            return nums.size();
        }
        // 扫描的三种状态
        static const int BEGIN = 0;
        static const int UP = 1;
        static const int DOWN = 2;
        int STATE = BEGIN;
        int max_length = 1; // 最大长度至少为1;
        for (int i = 1; i < nums.size(); i++) {
            switch (STATE) {
                case BEGIN:
                    if (nums[i] > nums[i - 1]) {
                        STATE = UP;
                        max_length++;
                    } else if (nums[i] < nums[i - 1]) {
                        STATE = DOWN;
                        max_length++;
                    }
                    break;
                case UP:
                    if (nums[i - 1] > nums[i]) {
                        STATE = DOWN;
                        max_length++;
                    }
                    break;
                case DOWN:
                    if (nums[i - 1] < nums[i]) {
                        STATE = UP;
                        max_length++;
                    }
                    break;
            }

        }
        return max_length;

    }
};

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(17);
    nums.push_back(5);
    nums.push_back(10);
    nums.push_back(13);
    nums.push_back(15);
    nums.push_back(10);
    nums.push_back(5);
    nums.push_back(16);
    nums.push_back(8);

    Solution s;
    cout<<s.wiggleMaxLength(nums)<<endl;


    return 0;
}