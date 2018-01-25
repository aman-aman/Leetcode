//aman kumar jha

class Solution {
public:
    string decodeString(string s)
    {
        int n=s.length();
        string res;
        stack<int> nums;
        stack<string> ch;
        int num=0;
        for(int i=0;i<n;i++)
        {

            if(isdigit(s[i]))
            {
                num=num*10+(s[i]-'0');
            }
            else if(isalpha(s[i]))
            {
                res.push_back(s[i]);
            }
            else if(s[i]=='[')
            {
                ch.push(res);
                nums.push(num);
                res="";
                num=0;
            }
            else if(s[i]==']')
            {
                string tmp=res;
                for(int i=0;i<nums.top()-1;i++)
                { res+=tmp;}

                res=ch.top()+res;
                ch.pop();
                nums.pop();

            }
        }
        return res;
    }
};
