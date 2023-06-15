/*
Optimized code

class Solution {
public:
    void nqueen(int col,vector<string>&board,vector<vector<string>>&ans,vector<int>&lRow,vector<int>&upDia,vector<int>&loDia,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(lRow[row]==0 && upDia[n-1 + col - row]==0 && loDia[row+col]==0){
                board[row][col]='Q';
                lRow[row]=1;
                upDia[n-1 + col - row]=1;
                loDia[row+col]=1;
                nqueen(col+1,board,ans,lRow,upDia,loDia,n);
                board[row][col]='.';
                lRow[row]=0;
                upDia[n-1 + col - row]=0;
                loDia[row+col]=0;
            }

        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int>lRow(n,0),upDia(2*n-1,0),loDia(2*n-1,0);
        nqueen(0,board,ans,lRow,upDia,loDia,n);
        return ans;
    }
};

*/