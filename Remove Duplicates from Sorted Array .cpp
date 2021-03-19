class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return nums.size();
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[i] != nums[j]){
                nums[++j] = nums[i];
            }
        }
        
        return j+1;
        
    }
};
