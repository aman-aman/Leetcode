//aman kumar jha
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        vector<int> v;
        int n=nums.size();
        if(n==0)
            return v;

        map<int,int>mp;
        vector<pair<int,int> >m;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;

        //count,num
        for(auto x:mp)
            m.push_back(make_pair(x.second,x.first));

        sort(m.begin(),m.end(),[&](pair<int,int> it1,pair<int,int> it2){return it1.first>it2.first;});
        int i=0;
        while(i<k)
        {
            v.push_back(m[i].second);
            i++;
        }
        return v;

    }
};
