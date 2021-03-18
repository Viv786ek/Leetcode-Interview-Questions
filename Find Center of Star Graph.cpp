
 class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int p,k,p1,p2;
p=edges[0][0];
k=edges[0][1];
p1=edges[1][0];
p2=edges[1][1];
if(p == p1)
return p;
else if(p==p2)
return p2;
else
return k;
        
    }
};
