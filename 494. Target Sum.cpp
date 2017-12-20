//aman kumar jha
class Solution
 {
public:
    int findTargetSumWays(vector<int>& nums, int S)
    {
        int sum=accumulate(nums.begin(),nums.end(),0);
        return sum<S||(sum+S)&1?0:getsum(nums,(S+sum)/2);

    }
    int getsum(vector<int> &num,int s)
    {
        int dp[s+1]={0};
        dp[0]=1;
        for(int i:num)
        {
            for(int j=s;j>=i;j--)
            {
                dp[j]=dp[j]+dp[j-i];
            }
        }

        return dp[s];
    }
};
