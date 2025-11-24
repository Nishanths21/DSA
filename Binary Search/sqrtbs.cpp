#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int sqrtnum(vector<int>& nums){
        int l=0,r=nums/2,ans=0;
        while(l<r){
            long long mid=l+(r-l)/2;
            if(mid*mid<=nums){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
};