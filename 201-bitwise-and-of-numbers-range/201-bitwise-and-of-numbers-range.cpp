class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        long long ans=right;
        while(ans>left)
        {
            ans=ans&(ans-1);
        }
        return ans;
    }
};