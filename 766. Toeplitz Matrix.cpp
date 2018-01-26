//aman kumar jha
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size()-1;i++)
        {
            for(int j=0;j<mat[i].size()-1;j++)
            {
                if(mat[i][j]!=mat[i+1][j+1])
                    return false;
            }
        }
        return true;

    }
};
