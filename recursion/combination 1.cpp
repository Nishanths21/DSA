#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void findcombo(int ind,int target,vector<vector<int>>& arr,vector<int>& ans,vector<vector<int>>& ds){
        if(ind==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr[ind]<=target){
            ds.push_back(arr[ind]);
            findcombo(ind,target-arr[ind],arr,ans,ds);
            ds.pop_back();
        }
        findcombo(ind+1,target,arr,ans,ds);
    }
    vector<vector<int>> combo(vector<vector<int>>candi,int target){
        vector<vector<int>> ans;
        vector<int> ds;
        findcombo(0,target,candi,ans,ds);
        return ans;
    }
};