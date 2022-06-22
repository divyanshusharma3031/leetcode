class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1)
        {
            return n;
        }
        int p=1;
        int pp=0;
        int ans=0;
        for(int i=2;i<=n;i++)
        {
            ans=p+pp;
            int temp=p;
            p=ans;
            pp=temp;
        }
        return ans;
    }
};