//aman kumar jha
class Solution {
public:
    int longestSubstring(string s, int k)
    {

        if(s.length()==0||k>s.size())
            return 0;
        if(k==0)
            return s.size();

        vector<int> cnt(26,0);
        for(int i=0;i<s.length();i++)
            cnt[s[i]-'a']++;

        int idx=0;
        while(idx<s.length()&&cnt[s[idx]-'a']>=k)
            idx++;
        if(s.length()==idx)
            return s.length();

        int left=longestSubstring(s.substr(0,idx),k);
        int right=longestSubstring(s.substr(idx+1),k);
        return max(left,right);
    }
};
