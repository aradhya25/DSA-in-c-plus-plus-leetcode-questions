class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int n=nums.size();
        
        // int maxsum=INT_MIN;
        // for(int st=0;st<n;st++){
        //     int sum=0;
        //     for(int end=st;end<n;end++){
        //         sum+=nums[end];
        //         maxsum=max(sum,maxsum);
        //     }
        // }
        // return maxsum;

        //kadane algorithm
        int n=nums.size();
        int currsum;
        int maxsum=INT_MIN;
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            maxsum=max(currsum,maxsum);
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};