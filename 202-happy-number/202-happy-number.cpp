class Solution {
public:
    int sumsquare(int n)
    {
        int s=0;
        while(n>0)
        {
            int rem=n%10;
            n=n/10;
            s=s+rem*rem;
        }
        return s;
    }
    bool isHappy(int n) {
        map<int,int> mpp;
        while(true)
        {
            // cout<<n<<"\n";
            if(mpp[n])
            {
                return false;
            }
            mpp[n]=1;
            
            n=sumsquare(n);
            
            if(n==1)
            {
                return true;
            }
        }
        return n==1;
    }
};