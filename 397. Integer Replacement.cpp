//aman kumar jha
class Solution {
public:
    int integerReplacement(int n)
    {
        int cnt=0;
        if(n>=INT_MAX)
            return 32;
        while(n!=1)
        {
            if(n%2==0)
                n=n/2;
            else
            {
                if(n==3||(__builtin_popcount(n-1)< __builtin_popcount(n+1)))
                    n--;
                else
                    n++;
            }
            cnt++;
        }
        return cnt;
    }
};
