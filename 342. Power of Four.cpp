//aman kumar jha
class Solution {
public:
    bool isPowerOfFour(int num)
    {
        double val1=log(num);
        double val2=log(4);
        long val=val1/val2;
        double valf=val1/val2;
        return valf==val;
    }
};
