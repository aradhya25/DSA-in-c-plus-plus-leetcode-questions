class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return; // Guard against empty vector
        k %= n;
        if (k == 0) return; // No need to rotate

        // Copy the last k elements
        vector<int> nums2(nums.end() - k, nums.end()); 

        // Insert at the beginning
        nums.insert(nums.begin(), nums2.begin(), nums2.end());

        // Erase the extra elements at the end
        nums.erase(nums.end() - k, nums.end());
    }
};
