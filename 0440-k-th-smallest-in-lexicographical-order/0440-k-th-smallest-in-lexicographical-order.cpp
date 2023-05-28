class Solution {
public:
    int steps(long long n,long long n1,long long n2)
    {
        int steps=0;
        while(n1<=n)
        {
            steps+=min(n2,n+1)-n1;
            n1=n1*10ll;
            n2=n2*10ll;
        }
        return steps;
    }
    int findKthNumber(int n, int k) {
//         i need to calculate the nodes between the succs nodes
       int curr=1;
        k--;
        while(k>0)
        {
            int s=steps(n,curr,curr+1);
            if(s<=k)
            {
                k=k-s;
                curr++;
            }
            else
            {
                k--;
                curr*=10;
            }
        }
        return curr;
    }
};