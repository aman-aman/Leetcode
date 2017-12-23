//aman kumar jha
class Solution {
public:
    int singleNonDuplicate(vector<int>& a)
    {
        int n=a.size();
        if(n==0)
            return 0;
        int val;
        for(int i=0;i<n;)
        {
            if(a[i]!=a[i+1])
            {
                val=a[i];
                break;
            }
            else
            {
                i=i+2;
            }
        }
        return val;

    }
};
