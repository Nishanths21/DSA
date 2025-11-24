#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool matrixsearch(vector<vecot<int>>& matrix,int target){
        int rows=matrix.size(), cols=matrix[0].size();
        int l-0,r=rows*cols-1;
        while(l<=r){
            int m=l+(r-l)/2;
            int ro=m/cols, co=m%cols;
            if(target<matrix[ro][co]){
                r=m-1;
            }
            else if(target>matrix[r][co]){
                l=m+1;
            }
            else{
                return true;
            }
        }
        return false;
    }
}