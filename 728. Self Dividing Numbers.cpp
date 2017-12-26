//aman kumar jha
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        int i=left;
        vector<int> res;
        while(i<=right)
        {
            string s=to_string(i);
            int flag=1;
            int n=i;
            for(int i=0;i<s.length();i++)
            {
                if(s[i]=='0')
                {
                    flag=-1;break;
                }
                if((s[i]-'0')!=0)
                {
                     if(n%(s[i]-'0')!=0)
                    {
                        flag=-1;break;
                    }
                }
            }
            if(flag==1)
                res.push_back(i);
        i++;
        }
        return res;
    }
};
