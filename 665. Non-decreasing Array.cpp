//aman kumar jha
class Solution
{
public:
    bool checkPossibility(vector<int>& a)
    {
        int c=0;
        int n=a.size();
        for(int i=1;i<n;i++)
        {
            if(a[i]<a[i-1])
            {
                c++;
                if(i<2||a[i-2]<=a[i])
                    a[i-1]=a[i];
                else
                    a[i]=a[i-1];
            }
        }

        return c<=1;
    }
};
