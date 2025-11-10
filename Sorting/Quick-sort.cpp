#include<bits/stdc++.h>
using namespace std;
int partitionindex(vector<int>& arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=arr[pivot] && i<=high){
            i++;
        }
        while(arr[j]>=arr[pivot] && j>=low){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(vector<int>&arr,int low,int high){
    if(low<high){
        int partition=partitionindex(arr,low,high);
        quicksort(arr,low,partition-1);
        quicksort(arr,partition+1,high);
    }
}