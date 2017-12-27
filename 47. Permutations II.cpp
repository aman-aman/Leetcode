//aman kumar jha
class Solution {
public:
    int fact(int n)
    {
        int dp[n+1];
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
            dp[i]=i*dp[i-1];

        return dp[n];
    }
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        int n=nums.size();
        vector<vector<int> > vec(fact(n));
        sort(nums.begin(),nums.end());
        int i=0;
        while(next_permutation(nums.begin(),nums.end()))
        {
            vec[i++]=nums;
        }

        vec[i]=nums;

        set<vector<int> > st;
        for(int i=0;i<vec.size();i++)
            st.insert(vec[i]);

        vector<vector<int> >res;
        for(auto x:st)
        {
            if(x.size()!=0)
                res.push_back(x);
        }
        return res;

    }
};
