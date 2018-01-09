//aman kumar jha
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& a)
    {
        int n=a.size();
        vector<vector<int> > vec;
        set<vector<int> > s;
        for(int i=0;i<pow(2,n);i++)
        {
            vector<int> temp;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    temp.push_back(a[j]);
                }
            }
            sort(temp.begin(),temp.end());
            s.insert(temp);
        }
        for(auto x:s)
            vec.push_back(x);
        return vec;
    }
};
