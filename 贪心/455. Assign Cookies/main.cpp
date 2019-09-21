#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int> &g, vector<int> &s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int child = 0;  // child 表示正在满足的孩子
        int cookie = 0;  // cookie表示正在尝试的糖果
        while (child < g.size() && cookie < s.size()) {
            if (g[child] <= s[cookie]) {
                child++;
                cookie++;
            } else {
                cookie++;
            }
        }
        return child;

    }
};

int main() {
    Solution S;
    vector<int> g;
    vector<int> s;
    g.push_back(5);
    g.push_back(10);
    g.push_back(2);
    g.push_back(9);
    g.push_back(15);
    g.push_back(9);
    s.push_back(6);
    s.push_back(1);
    s.push_back(20);
    s.push_back(3);
    s.push_back(8);

    cout << S.findContentChildren(g, s) << endl;
    return 0;


}
