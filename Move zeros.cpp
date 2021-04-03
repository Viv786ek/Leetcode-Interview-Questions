// 1st method
auto it = remove(nums.begin(),nums.end(),0);
        fill(it,nums.end(),0);

//2nd method
int i=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[i]!=0)
                ++i;               //till we find a 0
            if(j>i&&nums[j]!=0)
            {
                swap(nums[i++],nums[j]);     // j is increasing till we reach the if condition
            }
                
        }

//3rd
  class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j=0;
        int N = nums.size();
    while(i<N){
        if(nums[i]!=0){
            int tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            ++j;
        }
        i++;
    }
        
    }
};
  
