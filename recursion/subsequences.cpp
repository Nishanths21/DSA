#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void helper(vector<int>& s,int index,vector<int>& curr,vector<vector<int>>& result){
        if(index==s.size()){
            result.push_back(curr);
            return;
        }
        helper(s,index+1,curr,result);
        curr.push_back(s[index]);
        helper(s,index+1,curr,result);
    }
    vector<int> subseq(vector<vector<int>>& s){
        vector<vector<int>> result;
        vector<int> curr;
        helper(s,0,curr,result);
        return result;
    }
};