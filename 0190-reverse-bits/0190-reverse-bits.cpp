class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bs(n);
        bitset<32> bs2;
        for(int i=0;i<32;i++)
        {
            bs2[i]=bs[32-i-1];
        }
        return bs2.to_ulong();
    }
};