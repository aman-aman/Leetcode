//aman kumar jha
class Solution {
public:
    int wiggleMaxLength(vector<int>& a)
    {
        int n=a.size();
        if(n<2)
            return n;

        int k=0;
        while(k<n-1&&a[k]==a[k+1])
            k++;
         if(k==n-1)
             return 1;
        bool reqsmall=a[k+1]>a[k];
        int res=2;
        for(int i=k+1;i<n-1;i++)
        {
            if(a[i+1]<a[i]&&reqsmall)
            {
                reqsmall=!reqsmall;
                a[res]=a[i+1];
                res++;
            }
            else
            {
                if(!reqsmall&&a[i+1]>a[i])
                {
                    reqsmall=!reqsmall;
                    a[res]=a[i+1];
                    res++;
                }
            }

        }
        return res;

    }
};

