//aman kumar jha
class Solution {
public:
    int findComplement(int num)
    {
        int numbits=floor(log2(num))+1;
        int val=pow(2,numbits)-1;
        return num^val;

    }
};
