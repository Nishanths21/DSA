#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isvalid(vector<vector<char>>& board,int row,int cols,char c){
        for(int i=0;i<9;i++){
            if(board[i][cols]==c){
                return false;
            }
        }
        for(int j=0;j<9;j++){
            if(board[row][j]==c){
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]='.'){
                    for(char c='1';c<='9';c++){
                        if(isvalid(board,i,j,c)){
                            if(solve(board)) return true;
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void sudoko(vector<vector<char>>& board){
        solve(board);
    }
};