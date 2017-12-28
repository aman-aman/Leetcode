//aman kumar jha
class Solution {
public:
    vector<int> searchRange(vector<int>& a, int target)
    {
        int n=a.size();
        vector<int> r(2,-1);
        if(n==0)
            return r;
        int i=0,j=n-1;
        while(i<j)
        {
            int m=(i+j)/2;
            if(a[m]<target)
                i=m+1;
            else
                j=m;
        }
        if (a[i]!=target) return r;
        else r[0]=i;
        j=n-1;
        while (i < j)
        {
            int m=(i+j)/2+1;
            if (a[m]>target)j=m-1;
            else i = m;
        }
        r[1] = j;
        return r;

    }
};
