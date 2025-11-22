#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int countstudents(vector<int>& arr,int pages){
        int students=1;
        long long pagestudents=0;
        for(int i=0;i<arr.size();i++){
            if(pagesstudents+arr[i]<=pages){
                pagesstudents+=arr[i];
            }
            else{
                students++;
                pagestudents=arr[i];
            }
        }
        return students;
    }
    int countpages(vector<int>& arr,int n,int m){
        int l=*max_element(arr.begin(),arr.end());
        int r=accumulate(arr.begin(),arr.end(),0);
        while(l<=r){
            int mid=(l+r)/2;
            int students=countstudents(Arr,mid);
            if(students<m){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};