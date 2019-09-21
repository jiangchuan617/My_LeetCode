#include <iostream>
#include <vector>
using namespace std;

//
//
//class Solution {
//public:
//    vector<vector<int>> solve(vector<vector<int>>,int n){
//        if(n==1){
//            for(int j = 0;j<4;j++){
//                for(int i = ;i>=0;i--)
//
//            }
//        }
//
//    }
//
//
//};
//
//int main() {
//    int n = 0;
//    cin >> n;
//    vector<vector<int>> M;
//    for (int i = 0; i < 4; i++) {
//        vector<int> m_vec;
//        for (int j = 0; j < 4; j++) {
//            int x;
//            scanf("%d", &x);
//            m_vec.push_back(x);
//        }
//        M.push_back(m_vec);
//    }
//    Solution s;
//    vector<vector<int>> res = s.solve(M,n);
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            cout<<res[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//
//
//
//
//    return 0;
//}
#include <set>
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i =0;i<n;i++){
        int x;
        scanf("%d", &x);
        a.push_back(x);
    }
    // 首先吧所有偶数放在一起
    set<int> even;
    set<int> jishu;
    for(int i =0;i<n;i++){
        if (a[i]%2==0){
            even.insert(a[i]);
        }
    }

}