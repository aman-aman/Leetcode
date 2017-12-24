//aman kumar jha
class Solution {
public:
    int findLengthOfLCIS(vector<int>& a)
    {
        if(a.size()==0)
            return 0;
        int maxlen=1,len=1;
        for(int i=1;i<a.size();i++)
        {
            if(a[i]>a[i-1])
            {
                len++;
                maxlen=max(len,maxlen);
            }
            else
                len=1;
        }

        return maxlen;
    }
};
