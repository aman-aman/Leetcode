//aman kumar jha
class Solution {
public:
    bool checkValidString(string s)
    {
        stack<int> stb;
        stack<int> sts;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                stb.push(i);
            else if(s[i]=='*')
                sts.push(i);
            else
            {
                if(sts.empty()&&stb.empty())
                    return false;
                if(!stb.empty())
                    stb.pop();
                else
                    sts.pop();
            }
        }
        while(!stb.empty()&&!sts.empty())
        {
            if(stb.top()>sts.top())
                return false;

            sts.pop();
            stb.pop();
        }

        if(stb.empty())
            return true;
        return false;

    }
};
