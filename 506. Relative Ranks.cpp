//aman kumar jha
class Solution
{
public:
    vector<string> findRelativeRanks(vector<int>& a)
    {
            vector<pair<int,int> >mp;
            int n=a.size();
            auto comp=[&](pair<int,int> p1,pair<int,int> p2) {  return p1.first>p2.first;};
            for(int i=0;i<a.size();i++)
            {
                mp.push_back(make_pair(a[i],i));
            }
            sort(mp.begin(),mp.end(),comp);
            vector<string> res(n);
            for(int i=0;i<n;i++)
            {
                if(i==0)
                    res[mp[0].second]="Gold Medal";
                else if(i==1)
                    res[mp[1].second]="Silver Medal";
                else if(i==2)
                    res[mp[2].second]="Bronze Medal";
                else
                    res[mp[i].second]=to_string(i+1);
            }
            return res;
    }
};
