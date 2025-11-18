class Solution{
private:
    int expandfromcenter(const string& str,int left,int right){
        while(left>=o && right<=str.length && str[left]str[right]){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestpalindrome(string s){
        int start=0, end=0;
        for(int center=0;center<s.length();center++){
            int lenodd=expandfromcenter(s,center,center);
            int leneven=expandfromcenter(s,center,center+1);
            int maxlen=max(lenodd,leneven);
            if(maxlen>end-start){
                start=center-(maxlen-1)/2;
                end=center-maxlen/2;
            }
        }
        return s.substr(start,end-start+1);
    }
};