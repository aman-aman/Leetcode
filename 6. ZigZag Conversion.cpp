//aman kumar jha
class Solution {
public:
    string convert(string s, int nr)
    {
        if(nr<=1)
            return s;
        vector<string> res(nr);
        int row=0,step=1;
        for(int i=0;i<s.length();i++)
        {
            res[row].push_back(s[i]);
            if(row==0)
                step=1;
            if(row==nr-1)
                step=-1;
            row+=step;
        }
        string ans="";
        for(auto c:res)
        {
            ans+=c;
        }
        return ans;

    }
};
