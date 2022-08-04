class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        long long x=5;
        while(n/x>0)
        {
            ans=ans+n/x;
            x=x*5;
        }
        return ans;
    }
};