class Solution {
public:
    int trailingZeroes(int n) {
        int c2=0;
        int c5=0;
        for(int i=1;i<=n;i++)
        {
            int x=i;
            while(x>0 && x%2==0)
            {
                c2++;
                x=x/2;
            }
            x=i;
            while(x>0 && x%5==0)
            {
                c5++;
                x=x/5;
            }
        }
        return min(c2,c5);
    }
};