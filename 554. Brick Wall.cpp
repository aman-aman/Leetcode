class Solution {
public:
    int leastBricks(vector<vector<int>>& wall)
    {


        unordered_map<int,int>mp;
        int mincut=0;
        int row=wall.size();
        if(row==0)
            return 0;
        for(int i=0;i<row;i++)
        {
            int walls=0;
            for(int j=0;j<wall[i].size()-1;j++)
            {
                walls+=wall[i][j];
                mp[walls]--;
                mincut=min(mincut,mp[walls]);
            }
        }
        return row+mincut;

    }
};
