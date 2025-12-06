#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void func(int sum,int last,vector<int>& arr,int k,vector<vector<int>>& ans){
        if(sum==0 && arr.size()==k){
            ans.push_back(arr);
            return;
        }
        if(sum<=0 || arr.size()>k) return;
        for(int i=last;i<=9;i++){
            if(sum>=i){
                arr.push_bacK(i);
                func(sum-2,i+1,arr,k,ans);
                arr.pop_back();
            }
        }
    }
    vector<vector<int>> combo(int k,int n){
        vector<vector<int>> ans;
        vector<int> arr;
        func(n,1,arr,k,ans);
        return ans;
    }
};