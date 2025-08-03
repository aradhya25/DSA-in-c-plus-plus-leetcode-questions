class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int res=n;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]>=target){
                res=mid;
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return res;
    }
};