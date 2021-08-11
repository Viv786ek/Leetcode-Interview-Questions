class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=nums[0];
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            maxi = max(maxi,sum);
            sum = max(sum,0);
        }
        return maxi;
        
    }
};


