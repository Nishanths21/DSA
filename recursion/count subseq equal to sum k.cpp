#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int func(int ind,int sum,vector<int>& result){
        if(sum==0) return 1;
        if(sum<0 || ind==result.size()) return 0;
        return func(ind+1,sum-result[ind],result) + func(ind+1,sum,result);
    }
    int countfunc(vector<int>& nums,int target){
        return func(0,target,nums);
    }
};