//aman kumar jha
class Solution {
public:
    int lengthOfLIS(vector<int>& a)
    {
        int n=a.size();
        if(n==0)
            return 0;

        vector<int> dp(n,1);

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j]&&dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                }
            }
        }

        return *max_element(dp.begin(),dp.end());

    }
};
