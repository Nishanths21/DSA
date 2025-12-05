#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool func(int ind,int sum,vector<int>& nums){
        if(ind==nums.size()){
            return 0;
        }
        return func(ind+1,sum-nums[ind],nums) | func(ind+1,sum,nums)
    }
    bool countseq(vector<int>& nums,int target){
        return func(0,target,nums);
    }
};