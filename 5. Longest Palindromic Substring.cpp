//aman kumar jha
class Solution {
public:

    string longestPalindrome(string s)
    {
        if(s.length()==1)
            return s;

        int n=s.length();
        bool dp[n][n];
        memset(dp,false,sizeof(dp));
        int maxlen=1,start=0;
        for(int i=0;i<n;i++)
            dp[i][i]=true;


        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1]=true;
                start = i;
                maxlen = 2;
            }
        }


        for(int l=3;l<=n;l++)
        {
            for(int i=0;i<n-l+1;i++)
            {
                int j=i+l-1;
                if(((s[i]==s[j])&&dp[i+1][j-1]))
                {
                    dp[i][j]=true;
                    if (l>maxlen)
                    {
                        start=i;
                        maxlen=l;
                    }
                }
            }
        }
        return s.substr(start,maxlen);
    }
};
