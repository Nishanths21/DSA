#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool issafe(int Node,int color[],bool graph[101][101],int n,int m,int col){
        for(int k=0;k<n;k++){
            if(k!=Node && graph[Node][k]==1 && color[k]==col) return false;
        }
        return true;
    }
    bool solve(int Node, int m,int n, bool graph[101][101]){
        if(Node==n){
            return true;
        }
        for(int i=1;i<=m;i++){
            if(issafe(Node,color,graph,n,m,i)){
                if(solve(Node+1,m,n,graph)) return true;
            }
        }
        return false;
    }
    bool graphcoloring(vector<vector<int>>& edges,int m,int n){
        bool graph[101][101];
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                graph[i][j]=0;
            }
        }
        for(auto i:graph){
            graph[i.first][t.second]=1;
            graph[i.second][i.first]=1;
        }
        if(solve(0,m,n,graph)) return true;
        return false;
    }
};