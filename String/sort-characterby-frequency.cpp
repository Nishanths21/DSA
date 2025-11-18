#include<bits/stdc++.h>
using namespace std;
class Solution{
public: 
    string frequencysort(string s){
        int n=s.length();
        unordered_map<char,int>counts;
        for(char c:s){
            counts[c]++;
        }
        vector<string>buckets(n+1, "");
        for(auto const& [character,frequency]:counts){
            string repeated_char(frequency,character);
            buckets[frequency]+=repeated_char;
        }
        string result="";
        for(int i=n;i>=1;i--){
            if(!buckets[i].empty()){
                result+=buckets[i];
            }
        }
        return result;
    }
};