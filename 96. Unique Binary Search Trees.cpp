//aman kumar jha
class Solution {
public:
    long long numTrees(int n)
    {

        long long dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(long long i=2;i<=n;i++)
        {
            dp[i]=0;
            for(long long j=0;j<i;j++)
            {
                dp[i]=dp[i]+dp[j]*dp[i-j-1];
            }
        }
        return dp[n];
    }
};
