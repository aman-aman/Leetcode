//aman kumar jha
class Solution {
public:

    int countPrimes(int n)
    {
        vector<bool> prime(n,true);

        prime[0]=false;
        prime[1]=false;
        for (int p=2; p*p<=n; p++)
        {
            if (prime[p] == true)
            {
                for (int i=p*2; i<=n; i += p)
                    prime[i] = false;
            }
        }
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(prime[i])
                c++;
        }

        return c;
    }
};
