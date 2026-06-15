class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> nge(n, -1);

        // for(int i = 0; i < n; i++) {
        //     for(int j = 1; j < n; j++) {
        //         int idx = (i + j) % n;

        //         if(nums[idx] > nums[i]) {
        //             nge[i] = nums[idx];
        //             break;
        //         }
        //     }
        // }

        // return nge;

        stack<int>st;
        for(int i=2*n-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums[i%n]){
                st.pop();
            }
            if(i<n){
               nge[i]=st.empty()? -1:st.top();
            }
            st.push(nums[i%n]);
        }
        return nge;
    }
};