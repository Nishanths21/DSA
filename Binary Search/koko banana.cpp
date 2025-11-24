#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findmini(vector<int>& piles,int h){
        int l=1,r=*max_element(piles.begin(),piles.end());
        int res=r;
        while(l<=r){
            int mid=(r+l)/2;
            long long totaltime=0;
            for(int p:piles){
                totaltime+=ceil(stactic_cast<double>(p)/mid);
            }
            if(totaltime<h){
                r=mid-1;
                res=mid;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};