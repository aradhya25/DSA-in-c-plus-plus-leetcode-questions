class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
        sort(nums1.begin(), nums1.end());
    }
    // m=nums1.size();
    // n=nums2.size();

    // vector<int> res(m + n);
    // int i = 0;
    // int j = 0;
    // int k = 0;
    // while (i <= m-1 && j <= n-1) {
    //     if (nums1[i] < nums2[j]) {
    //         res[k] = nums1[i];
    //         i++;
    //     } else {
    //         res[k] = nums2[j];
    //     }
    //     k++;
    // }
    // if (i == m) {
    //     while (j <= n - 1) {
    //         res[k] = nums2[j];
    //         k++;
    //         j++;
    //     }
    // }
    // if (j == n) {
    //     while (i <= m - 1) {
    //         res[k] = nums1[i];
    //         k++;
    //         i++;
    //     }
    // }
    // return;
};


