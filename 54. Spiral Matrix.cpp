//aman kumar jha
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a)
    {
        vector<int> res;

        int m=a.size();
        if(m==0)
            return res;
        int n=a[0].size();
        int i, k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; ++i)
        {
            res.push_back(a[k][i]);
        }
        k++;

        for (i = k; i < m; ++i)
        {
            res.push_back(a[i][n-1]);
        }
        n--;

        if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                res.push_back(a[m-1][i]);
            }
            m--;
        }

        if (l<n)
        {
            for (i = m-1; i >= k; --i)
            {
                res.push_back(a[i][l]);
            }
            l++;
        }
    }
        return res;

    }
};
