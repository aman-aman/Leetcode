//aman kumar jha
class Solution {
public:
    void setZeroes(vector<vector<int>>& a)
    {
        int r=a.size();
        int c=a[0].size();
        set<int> st1;
        set<int> st2;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(a[i][j]==0)
                {
                    st1.insert(j);
                    st2.insert(i);
                }
            }
        }
        for(auto x:st1)
        {
            for(int i=0;i<r;i++)
            {
                a[i][x]=0;
            }
        }
        for(auto x:st2)
        {
            for(int i=0;i<c;i++)
            {
                a[x][i]=0;
            }
        }

    }
};
