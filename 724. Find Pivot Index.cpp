//aman kumar jha
class Solution {
public:
    int pivotIndex(vector<int>& a)
    {
        int n=a.size();
        if(n==0)
            return -1;
        vector<int> dp1(n,0),dp2(n,0);
        dp1[0]=a[0];
        dp2[0]=a[0];
        for(int i=1;i<n;i++)
            dp1[i]=dp1[i-1]+a[i];

        dp2[n-1]=a[n-1];
         for(int i=n-2;i>=0;i--)
            dp2[i]=dp2[i+1]+a[i];

        for(int i=0;i<n;i++)
        {
            if(dp1[i]==dp2[i])
                return i;
        }
        return -1;
    }
};
