#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int nthroot(int n,int m){
        int l=1,r=m;
        while(l<=r){
            int mid=(r+l)/2;
            long long ans=1;
            for(int i=0;i<n;i++){
                ans*=mid;
                if(ans>m) break;
            }
            if(ans==m) return mid;
            if(ans>m){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
};