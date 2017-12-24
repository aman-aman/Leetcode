//aman kumar jha
class Solution {
public:
    bool checkSubarraySum(vector<int>& a, int k)
    {
        int n=a.size();

       unordered_map<int,int>mp;
        int sum=0;
        mp[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
            int t=(k!=0)?sum%k:sum;
            if(mp.find(t)==mp.end())
                mp[t]=i;
            else
            {
                 if(i-mp[t]>1)
                    return true;
            }
        }
        return false;

    }
};
