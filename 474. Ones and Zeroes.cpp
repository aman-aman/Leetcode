//aman kumar jha
class Solution {
public:
    int findMaxForm(vector<string>& str, int m, int n)
    {
        int l=str.size();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(auto s:str)
        {
            int nums1=0,nums0=0;
            for(auto a:s)
            {
                if(a=='0')
                    nums0++;
                else if(a=='1')
                    nums1++;
            }
            for(int j=m;j>=nums0;j--)
            {
                for(int k=n;k>=nums1;k--)
                {
                        dp[j][k]=max(dp[j][k],1+dp[j-nums0][k-nums1]);
                }
            }
        }
        return dp[m][n];
    }
};
