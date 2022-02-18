class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
        {
            return false;
        }
        float x=log2(n)/log2(4);
        // cout<<x<<"\n";
        if(n==pow(4,int(x)))
        {
            return true;
        }
        return false;
    }
};