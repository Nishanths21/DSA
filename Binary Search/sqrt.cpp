#include<bits/stdc++.h>
using namespace std;
class sqrts(int n){
    int l=0,r=n;
    int res=0;
    while(l<=r){
        int mid=l-(r-l)/2;
        if((long long)mid*mid>n){
            r=mid-1;
        }
        else if((long long) mid*mid<n){
            l=mid+1;
            res=mid;
        }
        else{
            return mid;
        }
        return res;
    }
}