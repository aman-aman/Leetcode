class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {

        int rs=grid.size();
        int cs=grid[0].size();
        int r[rs],c[cs];
        for(int i=0;i<rs;i++)
            r[i]=-1;
        for(int j=0;j<cs;j++)
            c[j]=-1;


        for(int i=0;i<rs;i++)
        {
            for(int j=0;j<cs;j++)
            {
                r[i]=max(r[i],grid[i][j]);
            }
        }
        for(int j=0;j<cs;j++)
        {
            for(int i=0;i<rs;i++)
            {
                c[j]=max(c[j],grid[i][j]);
            }
        }
        int grid2[rs][cs];
        for(int i=0;i<rs;i++)
        {
            for(int j=0;j<cs;j++)
            {
                grid2[i][j]=min(r[i],c[j]);
            }
        }
        int sum=0;
        for(int i=0;i<rs;i++)
        {
            for(int j=0;j<cs;j++)
            {
                sum+=abs(grid2[i][j]-grid[i][j]);
            }
        }
        return sum;
    }
};
