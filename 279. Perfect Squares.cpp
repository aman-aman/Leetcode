//aman kumar jha
class Solution {
public:
    int numSquares(int n)
    {
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        for(int i=1;i<=n;i++)
        {
            int j=1;
            int res=INT_MAX;
            while(i>=j*j)
            {
                res=min(res,dp[i-j*j]+1);
                j++;
            }
            dp[i]=res;
        }
        return dp[n];
    }
};
