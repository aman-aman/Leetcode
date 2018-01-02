//aman kumar jha
class Solution {
public:
    bool getdivisor(int n)
    {
        vector<int> v;
        for (int i=1; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                if (n/i==i)
                    v.push_back(i);
                else
                {
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        int sum=0;
        for(auto c:v)
            sum+=(c!=n)?c:0;

        return sum==n;
    }
    bool checkPerfectNumber(int num)
    {
        return (num==0)?false:getdivisor(num);
    }
};
