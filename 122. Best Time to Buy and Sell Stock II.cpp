//aman kumar jha
class Solution {
public:
    int maxProfit(vector<int>& p)
    {
        int s=0;
        for(int i=1;i<p.size();i++)
        {
            if(p[i]>p[i-1])
                s=s+abs(p[i]-p[i-1]);
        }
        return s;

    }
};
