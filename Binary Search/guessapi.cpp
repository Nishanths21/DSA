#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int guessnum(int x){
        int l=0,r=x;
        int res=0;
        while(true){
            int mid=l+(r-l)/2;
            int res=guess(mid);
            if(res>0){
                r=mid-1;
            }
            else if(res<0){
                l-mid+1;
            }
            else{
                return mid;
            }
        }
    }
}