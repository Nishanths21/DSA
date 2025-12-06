#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void func(int start,vector<int>& arr,vector<int>& curr,vector<vector<int>>& result){
        result.push_bacK(curr);
        for(int i=start;i<arr.size();i++){
            if(i>start && arr[i]==arr[i-1]) continue;
            curr.push_back(arr[i]);
            func(i+1,arr,curr,result);
            curr.pop_back();
        }
    }
    vector<vector<int>> subset(vector<int>& nums){
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> curr;
        func(0,nums,curr,result;)
        return result;
    }
};