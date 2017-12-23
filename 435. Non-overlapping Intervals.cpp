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

    int eraseOverlapIntervals(vector<Interval>& inter)
    {
        if(inter.size()==0)
            return 0;

        auto comp=[](Interval it1,Interval it2){return it1.end<it2.end;};
        sort(inter.begin(),inter.end(),comp);
        int c=1,end=inter[0].end;
        for(int i=1;i<inter.size();i++)
        {
            if(end<=inter[i].start)
            {
                end=inter[i].end;
                c++;
            }
        }
        return inter.size()-c;

    }
    private:

};
