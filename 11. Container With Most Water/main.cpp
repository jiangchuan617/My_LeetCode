#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int maxarea = 0;
        while(j>i){
            maxarea = max(maxarea,min(height[i],height[j])*(j-i));
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxarea;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
