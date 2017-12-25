//aman kumar jha
class Solution {
public:
    string removeKdigits(string s,int k)
    {
        int n=s.length();
        if(n==k)
            return "0";

        stack<char> st;
        st.push(s[0]);
        int i=1;
        while(i<n)
        {
            while(k>0&&!st.empty()&&st.top()>s[i])
            {
                st.pop();
                k--;
            }
            st.push(s[i]);
            i++;
        }
        while(k>0)
        {
            k--;
            st.pop();
        }
        string res;
        while(!st.empty())
        {
            char ch=st.top();
            res.push_back(ch);
            st.pop();
        }
        reverse(res.begin(),res.end());
        while(res.length()>1&&res[0]=='0')
            res.erase(0,1);
        return res;
    }
};
