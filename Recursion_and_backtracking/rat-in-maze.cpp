// Rat in maze problem

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void rat(int row,int col, string s,vector<vector<int>> &m,int n,vector<string>&ans,vector<vector<int>>&vis , int dirx[],int diry[]){
        if(row==n-1 && col==n-1){
            ans.push_back(s);
            return;
        }
        
        string dir = "DLRU";
        for(int i=0;i<4;i++){
            int nrow=row + dirx[i];
            int ncol=col + diry[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && m[nrow][ncol]==1 && !vis[nrow][ncol]){
                vis[row][col]=1;
                rat(nrow,ncol,s+dir[i],m,n,ans,vis,dirx,diry);
                vis[row][col]=0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string>ans;
        vector<vector<int>>vis(n,vector<int>(n,0));
        int dirx[] ={1,0,0,-1};        // DLRU
        int diry[] ={0,-1,1,0};
        if (m[0][0] == 1) rat(0,0,"",m,n,ans,vis,dirx,diry);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends