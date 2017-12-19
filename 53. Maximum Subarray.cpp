//aman kumar jha
class Solution
{
public:
    int maxSubArray(vector<int>& a)
    {
        int n=a.size();
        int dp[n];
        dp[0]=a[0];
        int maxres=a[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=max(a[i],dp[i-1]+a[i]);
            maxres=max(dp[i],maxres);
        }
        return maxres;
    }
};
