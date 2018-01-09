//aman kumar jha
class Solution {
public:
    int sumof(int n)
    {
        int sum = 0, tmp;
        while (n)
        {
            tmp = n % 10;
            sum += tmp * tmp;
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n)
    {
        int slow=n,fast=n;
        do
        {
            slow=sumof(slow);
            fast=sumof(sumof(fast));
        }while(slow!=fast);

        if(slow==1)
            return 1;
        return 0;
    }
};
