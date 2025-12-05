#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void combofunc(int ind,int target,vector<int>& arr,vector<vector<int>>& ans,vector<int>& ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(ind==arr.size() || target<0) return;
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            ans.push_back(ds)
            combofunc(ind+1,target-arr[i],arr,ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combo2(vector<int>& candi,int target){
        sort(cando,begin(),candi.end());
        vector<vector<int>> ans;
        vector<int> ds;
        combofunc(0,target,ans,arr,ds);
        return ans;
    }
};