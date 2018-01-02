//aman kumar jha
class Solution {
public:

    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& p)
    {
        auto comp1=[&](pair<int,int> p1,pair<int,int> p2) {return p1.first > p2.first || (p1.first == p2.first && p1.second < p2.second); };
        sort(p.begin(),p.end(),comp1);
        vector<pair<int,int>> res;
        for(auto x:p)
            res.insert(res.begin()+x.second,x);

        return res;
    }
};
