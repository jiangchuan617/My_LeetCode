#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate("", n, n, result);
        return result;

    }

private:
    // left :当前还可以放置左括号的数量
    // right :当前还可以放置右括号的数量
    void generate(string item, int left, int right, vector<string> &result) {
        if (left == 0 && right == 0) {
            result.push_back(item);
            return;
        }
        if(left>0){
            generate(item+'(',left-1,right,result);
        }
        // 先放了左括号，才能放右括号
        if(left<right){
            generate(item+')',left,right-1,result);
        }
    }

    void generate1(string item, int n, vector<string> &result) {
        if (item.size() == 2 * n) {
            result.push_back(item);
            return;
        }
        generate1(item + '(', n, result);
        generate1(item + ')', n, result);
    }
};

int main() {
    vector<string> result;
    Solution S;
    result = S.generateParenthesis(2);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;

    }
    return 0;
}