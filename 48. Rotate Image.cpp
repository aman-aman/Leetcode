//aman kumar jha
class Solution {
public:
    void rotate(vector<vector<int>>& a)
    {
        int r=a.size();
        int c=a[0].size();
        for(int i=0;i<r;i++)
        {
            for(int j=i;j<c;j++)
                swap(a[i][j],a[j][i]);
        }
        for(int i=0;i<c;i++)
        {
            for(int j=0,k=c-1;j<k;j++,k--)
            {
                swap(a[i][j],a[i][k]);
            }
        }
    }
};
