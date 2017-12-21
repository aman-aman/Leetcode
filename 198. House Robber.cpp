//aman kumar jha
class Solution {
public:
    int rob(vector<int>& a)
    {
         int n=a.size();
        if(n==0)
            return 0;
        if(n==1)
            return a[0];
        if(n==2)
            return max(a[0],a[1]);
        if(n==3)
            return max(a[0]+a[2],a[1]);
        else
        {
            int dp[n];
            dp[0]=a[0];
            dp[1]=a[1];
            dp[2]=a[2]+a[0];
            dp[3]=a[3]+max(dp[1],dp[0]);
            for(int i=4;i<n;i++)
            {
                dp[i]=a[i]+max(dp[i-2],dp[i-3]);
            }

            return *max_element(dp,dp+n);
        }
    }
};
