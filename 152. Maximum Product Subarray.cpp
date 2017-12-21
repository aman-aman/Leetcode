//aman kumar jha
class Solution
{
public:
    int maxProduct(vector<int>& a)
    {
         int n=a.size();
        if(n==0)
            return 0;
        if(n==1)
            return a[0];

        int minp=a[0],maxp=a[0],m=a[0];
        for(int i=1; i<n; i++)
        {
            if(a[i]<0)
                swap(minp,maxp);

            maxp=max(maxp*a[i],a[i]);
            minp=min(minp*a[i],a[i]);
            m=max(m,maxp);
        }
        return m;
    }
};
