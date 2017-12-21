//aman kumar jha
/*
It is an O(n^2) Solution
*/
class Solution {
public:
    int minimumTotal(vector<vector<int>>& t)
    {
        int r=t.size();
        int c=t[r-1].size();
        int mat[r][c];
        int dp[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                mat[i][j]=INT_MAX;
        }
        for(int i=0;i<t.size();i++)
        {
            for(int j=0;j<t[i].size();j++)
                mat[i][j]=t[i][j];
        }
        dp[0][0]=mat[0][0];
        for(int i=0;i<c;i++)
            dp[r-1][i]=mat[r-1][i];

        for(int i=r-2;i>=0;i--)
        {
            for(int j=c-2;j>=0;j--)
            {
                dp[i][j]=mat[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return dp[0][0];

    }
};
