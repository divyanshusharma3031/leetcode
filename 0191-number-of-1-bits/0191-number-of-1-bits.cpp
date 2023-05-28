class Solution {
public:
    int hammingWeight(uint32_t n) {
        int rmsb=n&(-n);
        int ans=0;
        while(n>0)
        {
            n=n-rmsb;
            ans++;
            rmsb=n&(-n);
        }
        return ans;
    }
};