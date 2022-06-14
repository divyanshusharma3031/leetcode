class Solution {
public:
    int numberOfSteps(int n) {
        if(n==0)
        {
            return 0;
        }
        int setbits=__builtin_popcount(n);
        // cout<<setbits<<"\n";
        int zerobits=__builtin_clz(n);
        // cout<<zerobits<<"\n";
        return 31+setbits-zerobits;
    }
};