//aman kumar jha
class Solution {
public:
    bool find132pattern(vector<int>& a)
    {
        int n=a.size();
        if(n<3)
            return false;
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            mini=min(mini,a[i]);
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<a[i]&&mini<a[j])
                    return true;
            }
        }

        return false;
    }
};
