#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int sumby(vector<int>& arr,int div){
        int sum=0;
        for(int s:arr){
            sum+=ceil((double)s/div);
        }
        return sum;
    }
    int smallestdiv(vector<int>& arr,int limit){
        if(arr.size()>limit) return -1;
        int l=1, r=*max_element(arr.begin(),arr.end());
        while(l<=r){
            int mid=l+(r-l)/2;
            if(sumby(arr,mid)<=limit){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};