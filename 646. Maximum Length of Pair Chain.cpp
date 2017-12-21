//aman kumar jha
class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs)
    {
        int n=pairs.size();
        vector<pair<int,int> >v(n);
        for(int i=0;i<n;i++)
        {
            v[i].first=pairs[i][0];
            v[i].second=pairs[i][1];
        }
        //for(int i=0;i<n;i++)cout<<v[i].first<<" "<<v[i].second<<"\n";
        stable_sort(v.begin(),v.end());
        vector<int> dp(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(v[i].first>v[j].second&&dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
        }


        return *max_element(dp.begin(),dp.end());
    }
};
