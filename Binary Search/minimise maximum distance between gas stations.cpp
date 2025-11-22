class Solution{
private:
    int numofgasstations(long double dist, vector<int>& arr){
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            int gas=(arr[i]-arr[i-1])/dist;
            if(arr[i]-arr[i-1]==gas*dist){
                gas--;
            }
            cnt+=gas;
        }
        return cnt;
    }
public:
    long double minimisedist(vector<int>& arr,int k){
        long double l=0,r=0;
        for(int i=0;i<arr.size()-1;i++){
            r=max(r,(long double)(arr[i+1]-arr[i]));
        }
        int diff=1e-6;
        while(r-l>diff){
            int mid=(l+r)/2.0;
            int gasstations=numofgasstations(mid,arr);
            if(gasstations>k){
                l=mid;
            }
            else{
                r=mid;
            }
        }
        return r;
    }
}