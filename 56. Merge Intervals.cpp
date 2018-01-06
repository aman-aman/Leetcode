//aman kumar jha
/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<Interval> merge(vector<Interval>& inter)
    {
        vector<Interval> res;
        if(inter.size()==0)
            return res;
        auto comp=[&](Interval a,Interval b){ return a.start<b.start;};
        sort(inter.begin(),inter.end(),comp);
        int n=inter.size();
        res.push_back(inter[0]);
        for(int i=1;i<n;i++)
        {
            if(res.back().end<inter[i].start)
                res.push_back(inter[i]);
            else
                res.back().end=max(res.back().end,inter[i].end);
        }
        return res;
    }
};
