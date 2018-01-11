//aman kumar jha
class Solution {
public:
    vector<int> constructArray(int n, int k)
    {
        vector<int> res(n);
        int l=1,r=n;
        for(int i=0;i<n;i++)
        {
            if(k%2==1)
            {
                res[i]=l;
                l++;
            }
            if(k%2==0)
            {
                res[i]=r;
                r--;
            }
            if(k>1)
                k--;
        }
        return res;
    }
};
