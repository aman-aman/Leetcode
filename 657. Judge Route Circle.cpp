//aman kumar jha
class Solution {
public:
    bool judgeCircle(string s)
    {
        int x=0,y=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='U')
                y++;
            else if(s[i]=='D')
                y--;
            else if(s[i]=='R')
                x++;
            else
                x--;
        }
        if(x==0&&y==0)
            return true;
        return false;

    }
};
