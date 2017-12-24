//aman kumar jha
class Solution {
public:
    bool inside(int x,int y,int n)
    {
        return (x<n&&x>=0&&y<n&&y>=0);
    }
    double knightProbability(int n, int k, int r, int c)
    {
        int dx[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
        int dy[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
        double dp[n][n][k+1];
        memset(dp,0.0,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                dp[i][j][0]=1.0;
        }

        for(int s=1;s<=k;s++)
        {
         for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    double prob=0.0;
                    for(int k=0;k<8;k++)
                    {
                        int nx=i+dx[k];
                        int ny=j+dy[k];
                        if(inside(nx,ny,n))
                        {
                            prob+=(dp[nx][ny][s-1])/8;
                        }
                    }
                    dp[i][j][s]=prob;
                }
            }
        }
        return dp[r][c][k];
    }
};
