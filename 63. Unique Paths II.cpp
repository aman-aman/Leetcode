//aman kumar jha
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> > &a) {
        int m=a.size(),n=a[0].size();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
                for(int j=0;j<=n;j++)
                        dp[i][j]=0;
        }
        dp[0][1]=1;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                if(!a[i-1][j-1])
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
        return dp[m][n];
    }
};
