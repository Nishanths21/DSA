#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int beautyofstring(string s){
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++){
            unordered_map<char,int>freq;
            for(int j=i;j<n;j++){
                freq[s[i]]++;
                int maxi=INT-MIN;
                int mini=INT_MAX;
                for(auto it:freq){
                    mini=min(mini,freq.second);
                    maxi=max(maxi,freq.second);
                }
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};