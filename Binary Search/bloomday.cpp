#include<bits/stdc++.h>
using namespace std;
class SOlution{
private:
    bool Possible(vector<int>& arr,int day,int m,intk){
        int n=arr.size();
        int cnt=0;
        int bq=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                cnt++;
                if(cnt==k){
                    bq++;
                    cnt=0;
                }
            }
        }
        return bq>=m;
    }
private:
    int bloomday(vector<int>& arr,int m,int k){
        int total=1LL*m*k;
        if(total>arr.size()) return -1;
        int mini=*min_element(arr.begin(),arr.end());
        int maxi=*max_element(arr.begin(),arr.end());
        int l=mini,r=maxi;
        int result=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(possible(arr,mid,m,k)){
                result=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return result;
    }
};