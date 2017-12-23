//aman kumar jha
class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& str)
    {
        unordered_map<string, multiset<string> >mp;
        for(string s:str)
        {
            string t=s;
            sort(t.begin(),t.end());
            mp[t].insert(s);
        }
        vector<vector<string> >res;
        for(auto m:mp)
        {
            vector<string> r(m.second.begin(),m.second.end());
            res.push_back(r);
        }
        return res;
    }

};
