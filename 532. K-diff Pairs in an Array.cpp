//aman kumar jha
class Solution {
public:
    int findPairs(vector<int>& nums, int k)
    {
        if(nums.size()==0||k<0)
            return 0;
        map<int,int> mp;
        for(auto x:nums)
            mp[x]++;

        int c=0;
        for(auto x:nums)
        {
            if(mp.find(x)==mp.end())
                continue;
            if(k==0)
                c+=mp[x]>=2?1:0;
            else
            {
                if(mp.find(x-k)!=mp.end())
                    c++;
                if(mp.find(x+k)!=mp.end())
                    c++;
            }
            mp.erase(x);
        }
        return c;
    }
};
