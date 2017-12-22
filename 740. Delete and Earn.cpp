//aman kumar jha
class Solution {
public:
    int deleteAndEarn(vector<int>& a)
    {
        int n=a.size();
        if(n==0)
            return 0;
        vector<int> points(10001,0);
        for(int n: a)
            points[n]=points[n]+n;

        vector<int> dp(10003);
        for(int i=10000;i>=0;i--)
            dp[i]=max(dp[i+1],dp[i+2]+points[i]);

        return dp[0];
    }
};
