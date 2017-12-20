//aman kumar jha
class Solution {
public:
    int integerBreak(int n)
    {
        int dp[n+1];
        dp[0]=0;
        dp[1]=0;

        for(int i=1;i<=n;i++)
        {
            int maxres=0;
            for(int j=1;j<=i/2;j++)
            {
                maxres=max(max(maxres,j*(i-j)),j*dp[i-j]);
            }
            dp[i]=maxres;
        }
        return dp[n];
    }
};
