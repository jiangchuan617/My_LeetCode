#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size()==0){
            return "";
        }
        string res;
        int strs_size = strs.size();
        int min_len = strs[0].length();
        for(int i = 1;i<strs_size;i++){
            if (strs[i].length()<min_len){
                min_len = strs[i].length();
            }
        }
        int end = 0;
        while(end<min_len){
            for (int i = 1;i<strs_size;i++){
                if (strs[i][end]!=strs[i-1][end]){
                    return res;
                }
            }
            res+=strs[0][end];
            end++;
        }
        return res;

    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}