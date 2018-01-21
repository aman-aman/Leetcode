//aman kumar jha
class Solution {
public:
    int subarraySum(vector<int>& a, int k)
    {
        int n=a.size();
        int ans=0;
        vector<int> s(n+1,0);
        s[0]=0;
        for(int i=1;i<=n;i++)
            s[i]=s[i-1]+a[i-1];

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if(s[j]-s[i]==k)
                {
                    //cout<<k<<"\n";
                    ans++;
                }
            }
        }
        return ans;
    }
};
