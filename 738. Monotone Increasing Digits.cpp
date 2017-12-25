//aman kumar jha
class Solution {
public:
    int monotoneIncreasingDigits(int n)
    {
        ostringstream os;
        os<<n;
        string s=os.str();
         int temp=s.length();
        for(int i=s.length()-1;i>0;i--)
        {
            if(s[i]<s[i-1])
            {
                temp=i;
                s[i-1]=s[i-1]-1;
            }
        }

        for(int i=temp;i<s.length();i++)
        {
            s[i]='9';
        }
        return stoi(s);

    }
};
