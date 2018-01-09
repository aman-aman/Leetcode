//aman kumar jha
class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int n=s.length();
        if(n==0)
            return 0;
        int cnt=0,temp;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                temp=i;
                break;
            }
        }
        for(int i=temp;s[i]!=' '&&i>=0;i--)
            cnt++;
        return cnt;

    }
};
