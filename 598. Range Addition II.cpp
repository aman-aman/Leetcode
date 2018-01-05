//aman kumar jha
class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops)
    {

        int l=m,h=n;
        for(int i=0;i<ops.size();i++)
        {
            l=min(l,ops[i][0]);
            h=min(h,ops[i][1]);
        }
        return l*h;
    }
};
