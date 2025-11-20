#include<bits/stc++.h>
using namespace std;
class Solution{
private:
    int finddays(vector<int>& weights,int cap){
        int load=0;
        int days=1;
        int n=weights.size();
        for(int i=0;i<n;i++){
            if(lload+weights[i]>cap){
                days++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
public:
    int findcapacity(vector<int>& weights,int d){
        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.negin(),weights.end(),0);
        while(l<=r){
            int mid=l+(r-l)/2;
            int numofdays=finddays(weights,mid);
            if(numofdays<=d){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};