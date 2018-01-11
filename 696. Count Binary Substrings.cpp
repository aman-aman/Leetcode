//aman kumar jha
class Solution {
public:
    int countBinarySubstrings(string s)
    {
        int n=s.length();
        vector<int> dp;
        int cnt=1;

        for(int i=1;i<=n;i++)
        {
            if(s[i]==s[i-1])
            {
                cnt++;
            }
            else
            {
                dp.push_back(cnt);
                cnt=1;
            }
        }
        int ans=0;
        for(int i=1;i<dp.size();i++)
        {
            ans+=min(dp[i],dp[i-1]);
        }
        return ans;

    }
};
