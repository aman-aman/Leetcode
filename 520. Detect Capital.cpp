//aman kumar jha
class Solution {
public:
    bool detectCapitalUse(string s)
    {
        if(s.length()==1)
            return true;

        int cap=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
                cap++;
        }
        if(cap==s.length())
            return true;
        if(cap==0)
            return true;
        else if(s[0]>='A'&&s[0]<='Z'&&cap==1)
                return true;

        return false;
    }
};
