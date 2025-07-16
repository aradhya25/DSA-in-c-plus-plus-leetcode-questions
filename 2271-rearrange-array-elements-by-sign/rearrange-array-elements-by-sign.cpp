class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>nums2;
        vector<int>nums3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                nums2.push_back(nums[i]);
            }
            else{
                nums3.push_back(nums[i]);
            }
        }
       nums.clear();
       for(int i=0;i<nums2.size();i++){
        nums.push_back(nums2[i]);
        nums.push_back(nums3[i]);
       }
       return nums;
    }
};