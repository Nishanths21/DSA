class Solution{
public:
    void func(int ind,int currsum,vector<int>& arr,vector<int>& sums){
        if(ind==arr.size()){
            sums.push_back(currsum);
            return;
        }
        func(ind+1,currsum+arr[ind],arr,sums);
        func(ind+1,currsum,arr,sums);
    }
    vector<int> subsetsum(vector<int>& nums){
        vector<int> sums;
        func(0,0,nums,sums);
        sort(sums.begin(),sums.end());
        return sums;
    }
};

/*
class Solution{
pubic:
    vector<int> subsetsum(vector<int>& nums){
        int n=nums.size();
        vector<int> sums;
        for(int mask=0;mask<(1<<n);mask++){
            int sum=0;
            for(int i=0;i<n;i++){
                if(mask & (i<<1)){
                    sum+=arr[i];
                }
            }        
        }
        sums.push_bacK(sum);    
    }
    sort(sums.begin(),sums.end());
    return sums;    
};
*/