#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n=0;
    cin>>n;
    vector<int> dp;
    dp.push_back(0);
    dp.push_back(1);
    dp.push_back(2);
    dp.push_back(5);
    for (int i =4;i<n/2+1;i++){
        dp[i] = i/2+dp[i-1]
    }

    return 0;
}