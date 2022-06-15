class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n==1)
        {
            return true;
        }
        int p=n%2;
        while(n)
        {
            n=n/2;
            int ne=n%2;
            if(ne==p)
            {
                return false;
            }
            p=ne;
        }
        return true;
    }
};