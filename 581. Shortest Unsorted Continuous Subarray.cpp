//aman kumar jha
class Solution {
public:
    int findUnsortedSubarray(vector<int>& a)
    {
        int cnt=0,n=a.size();
        vector<int> b;

        for(int i=0;i<a.size();i++)
        {
            b.push_back(a[i]);
        }
        sort(b.begin(),b.end());
        int l=0,r=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            {
                l=i;break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]!=b[i])
            {
                r=i;break;
            }
        }

        return (l==0&&r==0)?0:r-l+1;

    }
};
