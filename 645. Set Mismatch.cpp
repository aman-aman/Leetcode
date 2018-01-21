//aman kumar jha
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        int n=nums.size();
        set<int> s;
        map<int,int> st;
        for(auto x:nums)
            st[x]++;

        for(auto x: nums)
            s.insert(x);

        int v=1;
        while(s.find(v)!=s.end())
            v++;

        vector<int>ans;
        for(auto x:st)
        {
            if(x.second>1)
                ans.push_back(x.first);
        }

        ans.push_back(v);
        return ans;
    }
};
