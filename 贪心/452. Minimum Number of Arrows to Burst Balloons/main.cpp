#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


bool cmp(const vector<int> &a, const vector<int> &b) {
    return a[0] < b[0];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>> &points) {
        if (points.size() == 0) {  // 穿入数据为空，直接返回0
            return 0;
        }
        sort(points.begin(), points.end(), cmp);  // 对气球进行排序

        int shoot_num = 1;  // 初始化弓箭手数量为1
        int shoot_begin = points[0][0];
        int shoot_end = points[0][1];

        for (int i = 1; i < points.size(); i++) {
            if (points[i][0]<=shoot_end) {
                shoot_begin = points[i][0];
                if (shoot_end > points[i][1]) {
                    shoot_end = points[i][1];
                }
            } else {
                shoot_num++;
                shoot_begin = points[i][0];
                shoot_end = points[i][1];
            }
        }

        return shoot_num;
    }
};

int main() {
    vector<vector<int>> points;
    vector<int> v1({10,6});
    vector<int> v2({2,8});
    vector<int> v3({1,6});
    vector<int> v4({7,12});

    points.push_back(v1);
    points.push_back(v2);
    points.push_back(v3);
    points.push_back(v4);

    Solution S;
    cout<<S.findMinArrowShots(points)<<endl;

    return 0;
}