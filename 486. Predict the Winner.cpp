//aman kumar jha
class Solution {
public:
    bool PredictTheWinner(vector<int>& nums)
    {
        int n=nums.size();

        int sum=accumulate(nums.begin(),nums.end(),0);
        int dp[n][n];
        for(int gap=0;gap<n;gap++)
        {
            for(int i=0,j=gap;j<n;i++,j++)
            {
                int x=i+2<=j?dp[i+2][j]:0;
                int y=i+2<=j?dp[i+1][j-1]:0;
                int z=i+2<=j?dp[i][j-2]:0;
                dp[i][j]=max(nums[i]+min(x,y),nums[j]+min(y,z));
            }
        }
        int p2=sum-dp[0][n-1];
        if(dp[0][n-1]>=p2)
            return true;
        return false;
    }
};
