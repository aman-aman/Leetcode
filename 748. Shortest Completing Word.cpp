//aman kumar jha
class Solution {
public:
    string shortestCompletingWord(string lic, vector<string>& words)
    {
        string str;
        for(int i=0;i<lic.length();i++)
        {
            if(isalpha(lic[i]))
                str+=tolower(lic[i]);
        }
        //cout<<str<<"\n";
        //vector<int> mp(26,0);
        map<char,int> mp;
        for(int i=0;i<str.length();i++)
        {
            mp[str[i]]++;
        }
        string ans;
        int n=words.size();
        int len=INT_MAX;
        for(int i=0;i<n;i++)
        {
            map<char,int> temp;
            for(int j=0;j<words[i].length();j++)
            {
                temp[words[i][j]]++;
            }
            int flag=1;
            for(int j=0;j<str.length();j++)
            {
                if(mp[str[j]]>temp[str[j]])
                {
                    flag=0;
                    break;
                }
            }
            if(flag&&words[i].length()<len)
            {
                ans.clear();
                ans+=words[i];
                len=ans.length();
            }
        }
        return ans;
    }
};
