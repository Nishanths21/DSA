#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void solve(int cols,string& board,int n, vector<int>& leftrow, vector<int>& lowerdiagonal, vector<int>& upperdiagonal,vector<vector<string>>& ans){
        if(cols==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftrow[row]==0 && lowerdiagonal[row+cols]==0 && upperdiagonal[n-1 + cols-row]==0){
                board[row][cols]='Q';
                leftrow[row]=1;
                lowerdiagonal[row+cols]=1;
                upperdiagonal[n-1 + cols-row]=1;
                solve(cols+1,board,n,leftrow,lowerdiagonal,upperdiagonal,ans);
                board[row][cols]='.';
                leftrow[row]=0;
                lowerdiagonal[row+col]=0;
                upperdiagonal[n-1 + col-row]=0;
            }
        }
    }
    vector<vector<string>>& nqueens(int n){
        vector<vector<string>> ans;
        vector<string> board(n,string(n.'.'));
        vector<int>leftrow(n,0), lowerdiagonal(2*n-1,0), upperdiagonal(2*n-1,0);
        solve(0,board,n,lowerdiagonal,upperdiagonal,ans);
        return ans;
    }
};