class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int,int>m1,m2;
        for(int n: nums1){
            m1[n]++;
        }
        for(int n: nums2){
            m2[n]++;
        }
        
        for(int i=0;i<nums1.size();i++){
            if(m1[nums1[i]] >0 && m2[nums1[i]]>0){
                v.push_back(nums1[i]);
                m1[nums1[i]]--;
                m2[nums1[i]]--;
            }
        }
        return v;
        
    }
};
