class Solution {
public:
    int digitsum(int n)
    {
        int s=0;
        while(n>0)
        {
            int rem=n%10;
            n=n/10;
            s+=rem;
        }
        return s;
    }
    int addDigits(int num) {
        while(num>=10)
        {
            num=digitsum(num);
        }
        return num;
    }
};