class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       int n=nums.size();
       int startpos=-1;
       int endpos=-1;
       for(int i=0;i<n;i++){
        if(nums[i]==target){
            startpos=i;
            break;
        }
      
       } 

       for(int j=n-1;j>=0;j--){
        if(nums[j]==target){
            endpos=j;
            break;
        }
       }
       return{startpos,endpos};
       
    }
};