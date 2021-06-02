class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        int first =1;
        int second =2;
        for(int i=3;i<=n;i++){
            int third = first + second;
            first = second;
            second = third;
        }
        return second;
        
    }
};



// 2nd
class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return 1;
        }
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};
