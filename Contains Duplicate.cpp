class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(),nums.end()).size();
      
      // another approach
        /*int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;*/
        
    }
};
