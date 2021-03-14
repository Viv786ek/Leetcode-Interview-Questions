class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n ==0)
            return;
        
        int c = n+m;
        while(n >0){
            nums1[--c] = ((m >0) && (nums2[n-1] <= nums1[m-1])) ? nums1[--m] : nums2[--n];
        }
        
    }
};

