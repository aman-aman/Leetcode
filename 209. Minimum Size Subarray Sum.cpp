//aman kumar jha
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& a)
    {
        int n=a.size();
        if(n==0)
            return 0;

        int left=0;
        int sum=0;
        int ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            while(sum>=s)
            {
                ans=min(ans,i+1-left);
                sum-=a[left++];
            }
        }
        return ans!=INT_MAX?ans:0;


    }
};
