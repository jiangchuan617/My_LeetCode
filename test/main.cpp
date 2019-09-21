#include <iostream>
#include <set>

#include <vector>

using namespace std;


struct graphNode {
    int val;
    graphNode *next;

    graphNode(int x) : val(x), next(NULL) {};

};

class Solution {
public:
    int douyoupin(vector<vector<int>> M) {
        int n = M.size();
        int ans = 0;


        vector<vector<graphNode *>> index;
        for (int i = 0; i < n; i++) {

        }
        for (int i = 0; i < n; i++) {
            vector<graphNode *> q;
            for (int j = 0; j < n; j++) {
                if (M[i][j] >= 3) {

                }
            }
        }
        bool visited[201];
        for(int i =1;i<=n;i++){
            if(!visited[i]){
                ans = max(ans,DFS(M,visited,i));

            }
        }
        return ans;




    }
//
private:
    int DFS(vector<vector<int>> M,bool visited[],int start){
        int t =1;
        visited[start] = 1;
        int n = M.size();
        for(int i = 1;i<=n;i++){
            if(!visited[i] && M[start][i]){
                t+=DFS(M,visited,i);
            }
        }
        return t;

    }
};


int main() {
    int n = 0;
    cin >> n;
    vector<vector<int>> M;
    for (int i = 0; i < n; i++) {
        vector<int> m_vec;
        for (int j = 0; j < n; j++) {
            int x;
            scanf("%d", &x);
            m_vec.push_back(x);
        }
        M.push_back(m_vec);
    }

    Solution s;
    int res = s.douyoupin(M);
    cout<<res<<endl;

//    int res = s.coinChange(coins,money);
//    cout<< res<<endl;
    return 0;
}


