//aman kumar jha
class Solution {
public:
    int triangleNumber(vector<int>& a)
    {
        int n=a.size();
        if(n==0)
            return 0;
        sort(a.begin(),a.end());
        int cnt=0;
        for(int i=0;i<n-2;i++)
        {
            int k=i+2;
            for(int j=i+1;j<n-1&&a[i]!=0;j++)
            {
                while(a[k]<a[i]+a[j]&&k<n)
                    k++;
                cnt+=k-j-1;
            }
        }
        return max(0,cnt);
    }
};
