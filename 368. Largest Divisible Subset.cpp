//aman kumar jha
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& a)
    {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int> > set(n);
        vector<int> res;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]%a[j]==0&&set[i].size()<set[j].size())
                {
                    set[i]=set[j];
                }
            }

            set[i].push_back(a[i]);
            if(res.size()<set[i].size())
                res=set[i];
        }
        return res;
    }
};
