//aman kumar jha
class Solution {
public:
    bool canConstruct(string r, string m)
    {
        vector<int> cnt(26,0);
        for(int i=0;i<m.size();i++)
            cnt[m[i]-'a']++;

        for(int i=0;i<r.size();i++)
            cnt[r[i]-'a']--;

        for(int i=0;i<26;i++)
        {
            if(cnt[i]<0)
                return false;
        }

        return true;
    }
};
