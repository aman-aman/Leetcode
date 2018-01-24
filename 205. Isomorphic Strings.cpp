//aman kumar jha
class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        map<char,char> mp1;
        int temp1=1,temp2=1;
        for(int i=0;i<s.length();i++)
        {
            if(mp1.count(s[i])==0)
                mp1[s[i]]=t[i];
            else
            {
                char ch=mp1[s[i]];
                if(ch!=t[i])
                {
                    temp1=0;
                    break;
                }
            }
        }
        map<char,char> mp2;
        for(int i=0;i<t.length();i++)
        {
            if(mp2.count(t[i])==0)
                mp2[t[i]]=s[i];
            else
            {
                char ch=mp2[t[i]];
                if(ch!=s[i])
                {
                    temp2=0;
                    break;
                }
            }
        }
        return temp1*temp2;
    }
};
