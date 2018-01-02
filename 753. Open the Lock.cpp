//aman kumar jha
class Solution
{
public:
    vector<string> getnum(string key)
    {
        vector<string> res;
        for (int i = 0 ; i < 4; i++) {
            string tmp = key;
            tmp[i]=(key[i]-'0'+1)%10+'0';
            res.push_back(tmp);
            tmp[i] = (key[i] - '0' - 1 + 10) % 10 + '0';
            res.push_back(tmp);
         }
        return res;
    }
    int openLock(vector<string>& dead, string target)
    {
        unordered_set<string> dds(dead.begin(), dead.end());
        queue<string> q;
        q.push("0000");
        if(dds.find("0000")!=dds.end())
            return -1;
        int depth=0;
        unordered_set<string> seen;
        seen.insert("0000");
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                string t=q.front();
                q.pop();
                vector<string> nb=move(getnum(t));
                for(auto x:nb)
                {
                    if(x==target)
                        return ++depth;
                    if(seen.find(x)!=seen.end())
                        continue;
                    if(dds.find(x)==dds.end())
                    {
                        q.push(x);
                        seen.insert(x);
                    }
                }
            }
            ++depth;
        }
        return -1;
    }
};
