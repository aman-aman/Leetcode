//aman kumar jha
class Solution {
public:
    int countSubstrings(string s)
    {

        int n=s.length();
        int dp[n][n];
        int cnt=n;
        memset(dp,0,sizeof(dp));
       for(int i=0;i<n;i++)
       {
           dp[i][i]=1;
           for(int j=0;j<i;j++)
           {
               if((dp[j+1][i-1]||i==j+1)&&s[i]==s[j])
               {
                   cnt++;
                   dp[j][i]=1;
               }
           }
        }
        return cnt;
    }
};
