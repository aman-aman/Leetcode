//aman kumar jha
class Solution
{
public:
    bool canPartition(vector<int>& a)
    {
        int n=a.size(),sum=0;
        for(int i=0;i<a.size();i++)
            sum=sum+a[i];

        if(sum%2!=0)
            return false;

        sum=sum/2;
        bool dp[n+1][sum+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=true;
        for(int i=0;i<=sum;i++)
            dp[0][i]=false;

        dp[0][0]=true;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                dp[i][j]=dp[i-1][j];
                if(j>=a[i-1])
                    dp[i][j]=(j>=a[i-1])?dp[i][j]||dp[i-1][j-a[i-1]];
            }
        }
        return dp[n][sum];
    }
};
