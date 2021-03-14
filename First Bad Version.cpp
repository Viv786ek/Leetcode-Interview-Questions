class Solution {
public:
    int firstBadVersion(int n) {
        long l=0,h=n;
        long res =0;
        while(l <=h){
            long mid = l + (h-l)/2;
            if(isBadVersion(mid)==true){
                h = mid -1;
                res = mid;
            }
            else{
                l = mid+1;
            }
        }
        return res;
    }
};
