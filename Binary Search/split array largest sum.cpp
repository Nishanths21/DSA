#include<bits/stdc++,h>
using namespace std;
class Solution{
private:
    int countpartitions(vector<int>& arr,int parts){
        int partitions=1;
        int subarray=0;
        for(int i=0;i<arr.size();i++){
            if(subarrya+arr[i]<=parts){
                subarray+=arr[i];
            }
            else{
                partitions++;
                subarray=arr[i];
            }
        }
        return partitions;
    }
public:
    int partsubarrays(vector<int>& arr,int k){
        if(k>arr.size()) return -1;
        int l=*max_element(arr.begin(),arr.end());
        int r=accumulate(arr.begin(),arr.end(),0);
        while(l<=r){
            int mid=(l+r)/2;
            int partitions=countpartitions(arr,mid);
            if(partitions<=k){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};