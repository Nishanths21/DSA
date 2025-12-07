#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    bool wordbreak(string s,vector<string>& worddict){
        int n=s.length();
        unordered_set<string> dict(worddict.begin(),worddict.end());
        vector<bool>dp(n+1,false);
        dp[0]=true;
        int maxlen=0;
        for (const string word:worddict){
            maxlen=max(maxlen,(int)word.size());
        }
        for(int i=1;i<=n;i++){
            for (int j=max(0,i-maxlen),j<i;j++){
                if(dp[j] && dict.find(s.substr(j,i-j))!=dict.end()){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[n];
    }
};