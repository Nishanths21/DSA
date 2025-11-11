#include<bits/stdc++.h>
using namespace std;


class Solution{
public:
    bool anagramstring(string s,string t){
        if(s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
    }
};