//aman kumar jha
class Solution {
public:
    vector<int> countSmaller(vector<int>& a)
    {
        int n=a.size();
        vector<int> dp(n,0);
        for(int i=0;i<n-1;i++)
        {
            int cnt=0;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    cnt++;
            }
            dp[i]=cnt;
        }
        return dp;
    }
};
