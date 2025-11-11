#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool rotatestring(string s,string goal){
        if(s.length()!=goal.length()) return false;
        string doubleds=s+s;
        return doubleds.find(goal)!=string::npos;
    }
};