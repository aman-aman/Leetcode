//aman kumar jha
class Solution {
public:
    int lengthOfLongestSubstring(string s)
    {
     int n=s.length();
        if(n==0)
            return 0;
        vector<int> cnt(256,-1);
        int m=-1,length=0;
        for(int i=0;i<n;i++)
        {
            m=max(m,cnt[s[i]]+1);
            cnt[s[i]]=i;
            length=max(length,i-m+1);
        }
        return length;
    }
};
