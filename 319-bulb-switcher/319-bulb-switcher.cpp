class Solution {
public:
    int bulbSwitch(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        int i=1;
        int c=0;
        while(i*i<=n)
        {
            c++;
            i++;
        }
        return c;
    }
};