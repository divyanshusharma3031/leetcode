class Solution {
public:
    int mySqrt(int x) {
        int lo=0;
        int hi=46340;
        int mid=0;
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
};