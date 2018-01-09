//aman kumar jha
class Solution {
public:
    vector<vector<int>> generate(int nums)
    {
        int n=nums;
        vector<vector<int> >vec(n);
        if(n==0)
            return vec;
        int dp[n][n];
        memset(dp,0,sizeof(dp));

        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
            dp[i][0]=1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n&&dp[i][j]!=0;j++)
                vec[i].push_back(dp[i][j]);
        }
        return vec;
    }
};
