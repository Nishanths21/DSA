#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr,int low,int mid,int high){
    vector<int>temp;
    int left=low;
    int right=mid+1;
    while(low<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
long long recursionpairs(vector<int>& arr,int low,int mid,int high){
    int cnt=0;
    int right=mid+1;
    for(int i=0;i<=high;i++){
        while(right<=high && arr[i]>2*arr[right]){
            right++;
        }
        cnt+=(right-(mid+1));
    }
}
int mergesort(vector<int>& arr,int low,int high){
    long long cnt=0;
    if(low>=high) return cnt;
    int mid=low+(high-low)/2;
    cnt+=mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);
    cnt+=recursionpairs(arr,low,mid,high);
    merge(arr,low,mid,high);
    return cnt;
}
int recursionpairsans(vector<int>& arr){
    return mergesort(arr,0,arr.size()-1);
}