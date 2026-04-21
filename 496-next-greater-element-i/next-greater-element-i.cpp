class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums2.size();
        vector<int> nge(n);   // stores next greater for nums2
        stack<int> st;

        // Step 1: Find next greater for nums2 (indices)
        for (int i = n - 1; i >= 0; i--) {
            
            // POP smaller elements
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            // ANSWER
            if (st.empty()) nge[i] = -1;
            else nge[i] = st.top();

            // PUSH
            st.push(nums2[i]);
        }

        // Step 2: Build answer for nums1 (linear search)
        vector<int> ans;

        for (int i = 0; i < nums1.size(); i++) {
            int val = nums1[i];

            // find index in nums2
            for (int j = 0; j < n; j++) {
                if (nums2[j] == val) {
                    ans.push_back(nge[j]);
                    break;
                }
            }
        }

        return ans;
    }
};