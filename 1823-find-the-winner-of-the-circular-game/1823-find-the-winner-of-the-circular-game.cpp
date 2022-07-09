class Solution {
public:
    int wimnner(int n,int k)
    {
        if(n==1)
        {
            return 0;
        }
        return (wimnner(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
//         recursive solution
        return wimnner(n,k)+1;
    }
};