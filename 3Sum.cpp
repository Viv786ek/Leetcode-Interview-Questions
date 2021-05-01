class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& num) {
       /* sort(nums.begin(),nums.end());
        //int n=nums.size();
        vector<vector<int>> res;
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || (i>0 && nums[i] != nums[i+1])){
                int l=i+1,h=nums.size()-1;
                int sum =0-nums[i];
                while(l<h){
                    if(nums[l]+nums[h]==sum){
                        vector<int>temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[h]);
                        res.push_back(temp);
                        
                        while(l<h && nums[l] == nums[l+1])l++;
                        while(l<h && nums[h] == nums[h-1])h--;
                        l++;h--;
                    }
                    else if(nums[l]+nums[h]<sum)
                        l++;
                    else
                        h--;
                }
            }
        }
        return res;*/
        
    vector<vector<int> > res;

    std::sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i++) {
        
        int target = -num[i];
        int front = i + 1;
        int back = num.size() - 1;

        while (front < back) {

            int sum = num[front] + num[back];
            
            // Finding answer which start from number num[i]
            if (sum < target)
                front++;

            else if (sum > target)
                back--;

            else {
                vector<int> triplet = {num[i], num[front], num[back]};
                res.push_back(triplet);
                
                // Processing duplicates of Number 2
                // Rolling the front pointer to the next different number forwards
                while (front < back && num[front] == triplet[1]) front++;

                // Processing duplicates of Number 3
                // Rolling the back pointer to the next different number backwards
                while (front < back && num[back] == triplet[2]) back--;
            }
            
        }

        // Processing duplicates of Number 1
        while (i + 1 < num.size() && num[i + 1] == num[i]) 
            i++;

    }
    
    return res;
        
    }
};
