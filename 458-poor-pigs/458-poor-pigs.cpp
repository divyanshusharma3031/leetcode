class Solution {
public:
    int poorPigs(int buckets, int d,int t) {
        if(buckets==1)
        {
            return 0;
        }
        if(buckets==2)
        {
            return 1;
        }
        int x=t/d;
        if(buckets<=x)
        {
            return 1;
        }
        return ceil(log(buckets)/log(x+1));
    }
};