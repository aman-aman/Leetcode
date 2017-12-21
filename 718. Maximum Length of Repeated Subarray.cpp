//aman kumar jha
class Solution {
public:
    int findLength(vector<int>& a,vector<int>& b)
    {
        int r=a.size();
        int c=b.size();
        int dp[r+1][c+1];
        int val=0;
        for(int i=0;i<=r;i++)
        {
            for(int j=0;j<=c;j++)
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(a[i-1]==b[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                    val=max(val,dp[i][j]);
                }
                else
                    dp[i][j]=0;
            }
        }
        return val;

    }
};
