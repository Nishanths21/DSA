#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string longestprefix(vector<string>& strs){
        if(strs.empty()) return "";
        string prefix=strs[0];
        for(auto& s:strs){
            while(s.find(prefix)!=0){
                prefix=prefix.substr(0,prefix.length()-1);
                if(prefix.empty()) return "";
           }
        }
        return prefix;
    }
};