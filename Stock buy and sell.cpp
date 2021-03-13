class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int>> v;
        int c= 0;
        for(int i=1;i<A.size();++i){
            vector<int> v1;
            if(A[i]>A[i-1])
            {
                v1.push_back(i-1);
                i++;
                while(i<n){
                    if(A[i-1] <= A[i]){
                        i++;
                    }
                    else break;
                }
                v1.push_back(i-1);
                c++;
                v.push_back(v1);
            }
        }
        return v;
    }
};
