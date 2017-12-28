//aman kumar jha
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        vector<int> res;
        if(nums.size()==0)
            return res;

        map<int,int> mp;
        set<int> s;
        for(int i=0;i<nums.size();i++)
        { mp[nums[i]]++; s.insert(nums[i]);}

        for(auto x:s)
        {
            if(mp[x]>floor(nums.size()/3))
                res.push_back(x);
        }
        return res;
    }
};
