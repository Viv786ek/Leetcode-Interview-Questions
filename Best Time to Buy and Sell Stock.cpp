class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro =0,m = INT_MAX;
        for(int i=0;i<prices.size();i++){
            m = min(m,prices[i]);
            pro = max(pro,prices[i]-m);
        }
        return pro;
    }
};
