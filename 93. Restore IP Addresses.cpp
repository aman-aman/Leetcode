//aman kumar jha
class Solution {
public:
    vector<string> restoreIpAddresses(string s)
    {
        vector<string> res;
        for(int a=1;a<=3;a++)
        {
            for(int b=1;b<=3;b++)
            {
                for(int c=1;c<=3;c++)
                {
                    for(int d=1;d<=3;d++)
                    {
                        if(a+b+c+d==s.length())
                        {
                            int l=stoi(s.substr(0,a));
                            int m=stoi(s.substr(a,b));
                            int n=stoi(s.substr(a+b,c));
                            int o=stoi(s.substr(a+b+c,d));
                            if(l<=255&&m<=255&&n<=255&&o<=255)
                            {
                                string temp=to_string(l)+"."+to_string(m)+"."+to_string(n)+"."+to_string(o);
                                if (temp.length()==s.length()+3)
                                    res.push_back(temp);
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
};
