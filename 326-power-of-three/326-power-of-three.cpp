class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
        {
            return false;
        }
        float x=log2(n)/log2(3);
        if(n==pow(3,x))
        {
            return true;
        }
        return false;
    }
};