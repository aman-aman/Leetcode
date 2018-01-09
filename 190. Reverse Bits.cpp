class Solution {
public:
    uint32_t reverseBits(uint32_t n)
    {
        bitset<32> bits(n);
        for(int i=0;i<16;i++)
        {
            //swap(bits[i],bits[32-i-1]);
            bool temp=bits[i];
            bits[i]=bits[32-1-i];
            bits[32-i-1]=temp;
        }
        return (uint32_t)bits.to_ulong();
    }
};
