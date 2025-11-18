#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool isomorphic(string s,string t){
        if(s.length()!=t.length()){
            return false;
        }
        vector<int> map_s(256,0);
        vector<int> map_t(256,0);
        for(int i=0;i<s.length();i++){
            char char_s=s[i];
            char char_t=s[i];
            if(map_s[char_s]!=map_t[char_t]){
                return false;
            }
            map_s[char_s]=i+1;
            map_t[char_t]=i+1;
        }
        return true;
    }
};