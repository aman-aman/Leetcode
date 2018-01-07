//aman kumar jha
class Solution {
public:
    vector<int> anagramMappings(vector<int>& a, vector<int>& b)
    {
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<b.size();i++)
        {
            mp[b[i]]=i;
        }
        for(int i=0;i<a.size();i++)
        {
            res.push_back(mp[a[i]]);
        }
        return res;
    }
};
