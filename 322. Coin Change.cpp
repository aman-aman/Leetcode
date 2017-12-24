//aman kumar jha
class Solution {
public:
    int coinChange(vector<int>& coins, int sum)
    {
        vector<int> dp(sum+1,sum+1);
        dp[0]=0;
        for(int i=1;i<=sum;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(coins[j]<=i)
                {
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        return dp[sum]>sum?-1:dp[sum];
    }
};
