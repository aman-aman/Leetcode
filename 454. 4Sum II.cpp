//aman kumar jha
class Solution {
public:
    int fourSumCount(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d)
    {
        int cnt=0;
        map<int,int>mp;
        for(auto x:a)
        {
            for(auto y:b)
            {
                mp[x+y]++;
            }
        }

        for(auto l:c)
        {
            for(auto m:d)
            {
                auto it=mp.find(0-l-m);
                if(it!=mp.end())
                    cnt+=it->second;
            }
        }
        return cnt;
    }
};
