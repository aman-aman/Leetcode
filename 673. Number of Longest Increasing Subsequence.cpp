//aman kumar jha
class Solution {
public:
    int findNumberOfLIS(vector<int>& a)
    {
        int n=a.size();
        if(n==0)
            return 0;

        vector<int> len(n,1);
        vector<int> count(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(a[i]>a[j])
                {
                    if(len[j]+1>len[i])
                    {
                        len[i]=len[j]+1;
                        count[i]=count[j];
                    }
                    else if(len[i]==len[j]+1)
                    {
                        count[i]+=count[j];
                    }
                }
            }
        }
        int longest=*max_element(len.begin(),len.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(longest==len[i])
            {
                ans+=count[i];
            }
        }
        return ans;
    }
};
