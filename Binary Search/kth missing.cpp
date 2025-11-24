#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int missingelement(Vector<int>& arr,int k){
        int l=0,r=arr.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            int missing=arr[mid]-(mid+1);
            if(missing<k){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return k+r+1;
    }
};