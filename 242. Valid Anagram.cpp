//aman kumar jha
class Solution {
public:
    bool isAnagram(string s, string t)
    {
        vector<int> cnt(26);
        for(int i=0;i<s.length();i++)
            cnt[s[i]-'a']++;

        for(int i=0;i<t.length();i++)
            cnt[t[i]-'a']--;

        bool res=true;
        for(int i=0;i<26;i++)
        {
            if(cnt[i]!=0)
                return false;
        }
        return true;

    }
};