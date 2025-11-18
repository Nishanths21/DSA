#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int validate(string s){
        int openbrackets=0;
        int closebrackets=0;
        for(char c:s){
            if(c=='('){
                openbrackets++;
            }
            else{
                if(openbrackets>0){
                    openbrackets--;
                }
                else{
                    closebrackets++;
                }
            }
        }
        return openbrackets+closebrackets;
    }
};