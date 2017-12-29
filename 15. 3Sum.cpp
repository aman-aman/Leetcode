//aman kumar jha
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a)
    {
        int cnt=0;
        vector<vector<int> >res;
        sort(a.begin(),a.end());
        int n=a.size();
        int k=0;
        for(int i=0;i<n-2;i++)
        {
            if(i==0||(i>0&&a[i]!=a[i-1]))
            {
                int lo=i+1;
                int hi=a.size()-1;
                int sum=0-a[i];
                while(lo<hi)
                {
                    if(a[lo]+a[hi]==sum)
                    {
                        vector<int> trp(3);
                        trp[0]=a[i];
                        trp[1]=a[lo];
                        trp[2]=a[hi];
                        res.push_back(trp);
                        while(lo<hi and a[lo]==a[lo+1])
                            lo++;
                        while(lo<hi and a[hi]==a[hi-1])
                            hi--;
                        lo++;hi--;
                    }
                    else if(a[lo]+a[hi]<sum) lo++;
                    else hi--;

                }
            }
        }
        return res;
    }
};
