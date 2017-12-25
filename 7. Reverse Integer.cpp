//aman kumar jha
class Solution {
public:
    int reverse(int x)
    {
        long long int num=0;
        int temp=x;
        while(x)
        {
            int rem=x%10;
            num=rem+num*10;
            x=x/10;
        }
         return (num<INT_MIN||num>INT_MAX)?0:num;
    }
};
