class Solution {
public:
    int mySqrt(int x) {
        long long lo=0;
        long long hi=46340;
        long long mid=0;
        while(lo<=hi)
        {
            
            mid=(lo+hi)/2;
            // cout<<mid<<"\n";
            if(x<mid*mid)
            {
                hi=mid-1;
                mid--;
            }
            else
            {
                lo=mid+1;
            }
        }
        return mid;
    }
    int bulbSwitch(int n) {
        return mySqrt(n);
    }
};