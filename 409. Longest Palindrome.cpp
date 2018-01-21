//aman kumar jha
class Solution {
public:
    int longestPalindrome(string s)
    {
        int ans=0;
        vector<int> mp(256);
        for(int i=0;i<s.length();i++)
            mp[s[i]]++;

        for(int i=0;i<256;i++)
        {
            ans+=mp[i]/2*2;
            if(ans%2==0&&mp[i]%2==1)
                ans++;
        }
        return ans;
    }
};
