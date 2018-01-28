//aman kumar jha
class Solution
{
public:

    bool isIdealPermutation(vector<int>& a)
    {
     int gi=0,li=0;
        int n=a.size();
        int b[n];
        for(int i=0;i<n;i++)
            b[i]=a[i];
        for(int i=1;i<a.size();i++)
        {
            if(a[i]<a[i-1])
                li++;
        }
        gi=countinversion(b,0,a.size()-1);
        return li==gi;
    }
    private:
    int inversion(int a[],int l,int h)
    {
        int m=(l+h)/2;
        int i=l,j=m+1;
        int f[h-l+1];
        int inv=0,k=0;
        while(i<=m&&j<=h)
        {
            if(a[i]<=a[j])
           {
               f[k++]=a[i++];
           }
            else
           {
               f[k++]=a[j++];
               inv+=(m-i+1);
           }
        }
        while(i<=m)
        {
            f[k++]=a[i++];
        }
        while(j<=h)
        {
            f[k++]=a[j++];
        }
        for(i=0;i<h-l+1;i++)
        {
            a[i+l]=f[i];
        }
        return inv;
    }
    int countinversion(int a[],int l,int h)
    {
        int m=(l+h)/2;
        int x,y,z;
        if(l>=h)
            return 0;
        x=countinversion(a,l,m);
        y=countinversion(a,m+1,h);
        z=inversion(a,l,h);
        return x+y+z;
    }
};
