class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //brute force
        // int n = nums.size();
        // vector<int> temp;

        // // Store non-zero elements
        // for(int i = 0; i < n; i++) {
        //     if(nums[i] != 0) {
        //         temp.push_back(nums[i]);  // 
        //     }
        // }

        // // Overwrite nums with non-zero elements
        // for(int i = 0; i < temp.size(); i++) {
        //     nums[i] = temp[i];
        // }

        // // Fill the rest with zeroes
        // for(int i = temp.size(); i < n; i++) {
        //     nums[i] = 0;
        // }


        int n = nums.size();
        int j = -1;

        // Find the first zero
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        // If there's no zero, nothing to do
        if (j == -1) return;

        // Move non-zero elements forward
        for (int i = j + 1; i < n; i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
