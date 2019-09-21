#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<int> S;  // 使用vector当做栈
        string result = "";  // 存储最终的字符
        for (int i = 0; i < num.length(); i++) {
            int number = num[i] - '0';
            while (S.size() != 0 && number < S[S.size() - 1] && k > 0) {
                S.pop_back();
                k--;
            }
            if (number != 0 || S.size() != 0) {
                S.push_back(number);
            }

        }
        while (S.size() != 0 && k > 0) {  // 如果栈不空，且任然可以删除数字
            S.pop_back();
            k--;
        }
        for (int i = 0; i < S.size(); i++) {
            result.append(1, '0' + S[i]);
        }
        if (result == "") {
            result = "0"; // 如果result为空，就返回0；
        }
        return result;


    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}