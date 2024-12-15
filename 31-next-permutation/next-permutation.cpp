class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int idx=-1;
        //finding pivot
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){ //if array is already greates
            reverse(nums.begin(),nums.end());
            return;
        }
        //reverse and sort after pivot
        reverse(nums.begin()+idx+1 , nums.end());
        //finding just greater element than idx
        int j=-1;
        for(int i=idx+1;i<n;i++){
            if(nums[i]>nums[idx]){
                j=i;
                break;
            }
        }
        //swapping
        int temp=nums[idx];
        nums[idx]=nums[j];
        nums[j]=temp;
        return;
        


        
    }
};