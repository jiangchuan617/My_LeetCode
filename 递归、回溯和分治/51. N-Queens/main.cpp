#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> result;  // 存储最后的数组
        vector<vector<int>> mark;  // 标记棋盘中可以放置皇后的二维数组
        vector<string> location;  // 存储某个摆放结果，当完成一次递归找到结果后
        // 初始化mark 和 location
        for (int i = 0; i < n; i++) {
            mark.push_back((vector<int>()));
            // mark 全0 矩阵
            for (int j = 0; j < n; j++) {
                mark[i].push_back(0);
            }
            // location 全.矩阵
            location.push_back("");
            location[i].append(n, '.');

        }

        generate(0, n, location, result, mark);
        return result;


    }

    // k代表了完成了几个皇后的放置
    void generate(int k, int n,
                  vector<string> &location,
                  vector<vector<string>> &result,
                  vector<vector<int>> &mark) {
        if (k == n) {
            result.push_back(location);
            return;
        }
        // 按照顺序尝试第0至n-1列的放置
        for (int i = 0; i < n; i++) {
            if (mark[k][i] == 0) {
                vector<vector<int>> temp_mark = mark;   // 记录回溯前的mark镜像
                location[k][i] = 'Q';  // 记录当前皇后的位置
                put_down_the_quene(k, i, mark);  // 放置皇后
                generate(k + 1, n, location, result, mark);  // 递归下一行的皇后放置
                mark = temp_mark;  // 将mark 重新赋值为回宿迁的状态
                location[k][i] = '.'; // 将当前尝试的皇后位置重新置为'.'
            }
        }
    }

private:
    void put_down_the_quene(int x, int y, vector<vector<int>> &mark) {
        // 方向数组
        static const int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
        static const int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
        mark[x][y] = 1;  // (x,y)放置皇后,进行标记
        for (int i = 0; i < mark.size(); i++) {
            // 8个方向，每个方向向外延伸1至N-1
            for (int j = 0; j < 8; j++) {
                // 新方向向八个方向延伸，每个方向最多延伸N-1
                int new_x = x + i * dx[j];
                int new_y = y + i * dy[j];
                // 检查新位置是不是还在棋盘内
                if (new_x >= 0 && new_x < mark.size() && new_y >= 0 && new_y < mark.size()) {
                    mark[new_x][new_y] = 1;
                }


            }
        }

    }
};

int main() {
    vector<vector<string>> result;
    Solution S;
    result = S.solveNQueens(4);
    for (int i = 0; i < result.size(); i++) {
        cout << "i=" << i << endl;
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j].c_str() << endl;
        }
        cout << endl;
    }
    return 0;
}