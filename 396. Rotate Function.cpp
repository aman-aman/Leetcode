//aman kumar jha
class Solution {
public:

    int maxRotateFunction(vector<int>& a)
    {
        int sum=0,f=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
            f=f+i*a[i];
        }
        int ans=f;
        for(int i=a.size()-1;i>0;i--)
        {
            f=f+sum-a.size()*a[i];
            ans=max(ans,f);
        }
        return ans;
    }
};
