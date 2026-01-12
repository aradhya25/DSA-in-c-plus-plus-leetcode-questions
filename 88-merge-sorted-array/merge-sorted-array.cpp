class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        int i=0,j=0,k=0;
        vector<int>res(m+n);
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                res[k]=nums1[i];
                i++;
            }else{
                res[k]=nums2[j];
                j++;
            }
            k++;
        }
        if(i==m){
            while(j<=n-1){
                res[k]=nums2[j];
                k++;
                j++;
            }
        }
        if(j==n){
            while(i<=m-1){
                res[k]=nums1[i];
                k++;
                i++;
            }
        }
        nums1=res;
        
    }
};