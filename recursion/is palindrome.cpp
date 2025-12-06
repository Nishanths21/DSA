#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool ispalindrome(string& s,int start,int end){
        while(start<end){
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    void backtracking(int ind,string& s,vector<string>& path,vector<vector<int>>& res){
        if(ind==s.length()){
            res.push_back(path);
            return;
        }
        for(int i=ind;i<s.length();i++){
            if(ispalindrome(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                backtracking(i+1,s,path,res);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string& s){
        vector<vector<string>> res;
        vector<string> path;
        backtracking(0,s,path,res);
        return res;
    }
};