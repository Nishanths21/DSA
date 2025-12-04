#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    long long mod=1e9+7;
    long long pow(long long base,int x){
        if(x==0) return 1;
        long long half=pow(base,x/2);
        long long result=(half*half)%mod;
        if(x%2!=0){
            result=(result*base)%mod;
        }
        return result;
    }
    int ans(long long n){
        long long even=(n+1)/2;
        long long odd=n/2;
        long long result1=pow(5,even);
        long long result2=pow(4,odd);
        return (int) ((result1*result2)%mod;)
    }
};