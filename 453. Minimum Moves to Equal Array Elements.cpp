//aman kumar jha
class Solution {
public:
    int minMoves(vector<int>& a)
    {
        int n=a.size();
        if(n==0||n==1)
            return 0;
        int minval=*min_element(a.begin(),a.end());
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=a[i];
        }

        return res-minval*n;
    }
};
