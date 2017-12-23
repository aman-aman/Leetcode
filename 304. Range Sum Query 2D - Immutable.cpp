//aman kumar jha
class NumMatrix {
public:
    vector<vector<int> >dp;
    NumMatrix(vector<vector<int> > a)
    {
        int r=a.size();
        int c=r>0?a[0].size():0;
        dp=vector<vector<int>>(r+1,vector<int>(c+1,0));
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                dp[i][j]=a[i-1][j-1]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
        }
    }

    int sumRegion(int r1, int c1, int r2, int c2)
    {
        return dp[r2+1][c2+1]-dp[r1][c2+1]-dp[r2+1][c1]+dp[r1][c1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */
