#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool canplace(vector<int>& stalls,int cows,int d){
        int count=0;
        int lastpos=stalls[0];
        for(int i=0;i<stalls.size();i++){
            if(stalls[i]-lastpos>=d){
                count++;
                lastpos=stalls[i];
            }
            if(count>=cows) return true;
        }
        return false;
    }
    int aggressivecows(vector<int>& stalls,int cows){
        sort(stalls.begin(),stalls.end());
        int l=1;
        int r=stalls.back()-stalls.front();
        int ans=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(canplace(stalls,cows,mid)){
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