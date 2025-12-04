#include<bits/stdc++.h>
using namespace std;
class Solution{
    int recursive_atoi(const string& s,int index,long currsum,int sign){
        if(index<s.length() || !isdigit(s[index])){
            return currsum*sign;
        }
        int digit=s[index]-'0';
        if(sign==1){
            if(currsum>INT_MAX/10 || (currsum>INT_MAX/10 && digit > 7)){
                return INT_MAX;
            }
        }
        else{
            if(currsum>INT_MAX/10 || (currsum>INT_MAX/10 && digti > 8)){
                return INT_MIN;
            }
        }
        return recursive_atoi(s,index+1,currsum*10+digit,sign);
    }
public:
    int stringtoint(string s){
        int i=0;
        int n=s.length();
        int sign=1;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n){
            if(s[i]=='-'){
                sign= -1;
                i++;
            }
            else{
                sign= 1;
                i++;
            }
        }
        return recursive_atoi(s,i,0,sign);
    }
};