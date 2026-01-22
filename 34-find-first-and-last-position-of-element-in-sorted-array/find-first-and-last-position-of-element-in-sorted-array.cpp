class Solution {
public:
    //     int lowerbound(vector<int>& arr, int n, int x) {
    //         int low = 0, high = n - 1;
    //         int ans = n;
    //         while (low <= high) {
    //             int mid = (low + high) / 2;
    //             if (arr[mid] >= x) {
    //                 ans = mid;
    //                 high = mid - 1;
    //             } else {
    //                 low = mid + 1;
    //             }
    //         }
    //         return ans;
    //     }

    //    int upperbound(vector<int>& arr, int n, int x) {
    //     int low = 0, high = n - 1;
    //     int ans = n;
    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;
    //         if (arr[mid] > x) {
    //             ans = mid;
    //             high = mid - 1;
    //         } else {
    //             low = mid + 1;
    //         }
    //     }
    //     return ans;
    // }

    vector<int> searchRange(vector<int>& nums, int target) {
        // int startpos=-1;
        // int endpos=-1;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==target){
        //         startpos=i;
        //         break;
        //     }
        // }
        // for(int i=n-1;i>=0;i--){
        //     if(nums[i]==target){
        //         endpos=i;
        //         break;
        //     }
        // }
        // return{startpos,endpos};
        int n = nums.size();

        // int lb = lowerbound(nums, n, target);
        // if (lb == n || nums[lb] != target)
        //     return {-1, -1};
        // return {lb, upperbound(nums, n, target) - 1};

        int low = 0;
        int high = n - 1;
        int first = -1;
        int last = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first = mid;
                high = mid - 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        low = 0;
        high = n - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                last = mid;
                low = mid + 1;
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return {first, last};
    }
};