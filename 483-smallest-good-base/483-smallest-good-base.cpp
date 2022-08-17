class Solution {
public:
//     gp 
    long long check(long long n,long long d)
    {
        double tn=(double) n;
        unsigned long long right=(unsigned long long)(pow(tn,1.0/d)+1);
        unsigned long long left=1;
        while (left<=right){
            unsigned long long mid=left+(right-left)/2;
            unsigned long long sum=1,cur=1;
            for (int i=1;i<=d;i++) {
                cur*=mid;
                sum+=cur;
            }
            if (sum==n) return mid;
            if (sum>n) right=mid-1;
            else left=mid+1;
        }
        return 0;
    }
    string smallestGoodBase(string n) {
        long long ans=-1;
        long long s=stoll(n);
        long long x=1;
        for(long long i=62;i>=1;i--)
        {
            if((x<<i)<s)
            {
                long long c=check(s,i);
                if(c!=0)
                {
                    return to_string(c);
                }
            }
        }
        return to_string(s-1);
    }
};