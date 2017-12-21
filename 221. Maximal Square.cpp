//aman kumar jha
class Solution {
public:
    int maximalSquare(vector<vector<char>>& m)
    {
        if(m.size()==0)
            return 0;
        int r=m.size();
        int c=m[0].size();
        int dp[r][c];
        for(int i=0;i<c;i++)
            dp[0][i]=m[0][i]-48;
        for(int i=0;i<r;i++)
            dp[i][0]=m[i][0]-48;
        for(int i=1;i<r;i++)
        {
            for(int j=1;j<c;j++)
            {
                if(m[i][j]=='1')
                    dp[i][j]=1+min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
                else
                    dp[i][j]=0;
            }
        }

        int res=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
                res=max(res,dp[i][j]);
        }
        return res*res;


    }
};
