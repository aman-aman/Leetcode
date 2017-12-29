//aman kumar jha
class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target)
    {
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<a.size();i++)
        {
            if(mp.find(target-a[i])!=mp.end())
            {
                res.push_back(i);
                res.push_back(mp[target-a[i]]);
            }
            mp[a[i]]=i;
        }
        return res;
    }
};
