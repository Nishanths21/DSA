#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void(int ind,string& currentstring,string digits,vector<string>& ans,string mapping[]){
        if(ind==digits.size()){
            ans.push_back(currentstring);
            return;
        }
        int number=digits[ind]-'0';
        string value=mapping[number];
        for(int i=0;i<value.size();i++){
            currentstring.push_back(value[i]);
            func(ind+1,currentstring,digits,ans,mapping);
            currentstring.pop();
        }
    }
    vector<string> lettercombo(vector<string>& nums){
        vector<string> ans;
        if(nums.size()==0) return ans;
        string currentstring="";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        func(0,currentstring,nums,ans,mapping);
        return ans;
    }
};