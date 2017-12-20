//aman kumar jha
class Solution {
public:
    int combinationSum4(vector<int>& a, int sum)
    {
        int n=a.size();
        vector<int> dp(sum+1,0);
        dp[0]=1;
        for(int i=1;i<sum+1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i-a[j]>=0)
                    dp[i]=dp[i]+dp[i-a[j]];
            }
        }

        return dp[sum];
    }
};
