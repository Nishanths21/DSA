#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void insert(stack<int> s,int temp){
        if(s.empty() || s.top()<=temp){
            s.push(temp);
            return;
        }
        int val=s.top();
        s.pop();
        insert(s,temp);
        s,push(val);

    }
    void sortstack(stack<int>& s){
        if(!s.empty()){
            int temp=s.top();
            s.pop();
            sortstack(s);
            insert(s,temp);
        }
    }
};