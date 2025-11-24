class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int l=0,r=nums.size()-1;
        int ans=INT_MAX;
        int index=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[l]<=nums[r]){
                if(nums[l]<ans){
                    index=l;
                    ans=nums[l];
                }
                break;
            }
            if(nums[mid]>nums[l]){
                if(nums[l]<ans){
                    index=l;
                    ans=nums[l];
                }
                l=mid+1;
            }
            else{
                if(nums[mid]<nums[l]){
                    if(nums[l]<ans){
                        index=l;
                        ans=nums[l];
                    }
                    r=mid-1;
                }
            }
        }
        return index;
    }
};