//aman kumar jha
class Solution {
public:
    bool contain(vector<string>& dict,string s)
    {
        for(int i=0;i<dict.size();i++)
        {
            if(dict[i].compare(s)==0)
                return true;
        }
        return false;
    }
    bool wordBreak(string s, vector<string>& dict)
    {
        int n=s.length();
        vector<bool> wb(n+1,false);
        for(int i=1;i<=n;i++)
        {
            if(wb[i]==false&&contain(dict,s.substr(0,i)))
                wb[i]=true;
            if(wb[i])
            {
                if(i==n)
                    return true;
                for(int j=i+1;j<=n;j++)
                {
                    if(wb[j]==false&&contain(dict,s.substr(i,j-i)))
                        wb[j]=true;
                    if(j==n&&wb[j]==true)
                        return true;
                }
            }
        }
        return false;
    }
};
