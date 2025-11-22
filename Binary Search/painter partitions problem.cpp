#include<bits/stdc++.h>
using namespace std;
class Solution{
private:
    int countpartitions(vector<int>& arr,int units){
        int painters=1;
        int paints=0;
        for(int i=0;i<arr.size();i++){
            if(paints+arr[i]<=units){
            paints+=arr[i];
            }
            else{
                painters++;
                paints=arr[i];
            }
        }
        return painters;
    }
public:
    int countpainterspartitions(vector<int>& arr,int k){
        if(k>arr.size()) return -1;
        int l=*max_element(arr.begin(),arr.end());
        int r=accumulate(arr.begin(),arr.end(),0);
        while(l<=r){
            int mid=(l+r)/2;
            int painterspart=countpartitions(arr,mid);
            if(painterspart<=k){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};