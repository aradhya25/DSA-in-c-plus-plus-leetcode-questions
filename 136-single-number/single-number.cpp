class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //    int ans=0;
    //    for(int i=0;i<nums.size();i++){
    //     ans=ans^nums[i];
    //    }
    //    return ans;
    int n=nums.size();
    int count=0;
    int num=0;
    for(int i=0;i<n;i++){
        num=nums[i];
        count=0;
        for(int j=0;j<n;j++){
            if(nums[j]==num){
                count++;
            }
        }
    if(count==1){
        return num;
    }
    }
       return num;
    }
};