class Solution {
public:
    map<int,int> mpp;
    int Sieve(int n)
    {
        if(mpp[n]!=0)
        {
            return mpp[n];
        }
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));

        for (int p = 2; p * p <= n; p++) {
            // If prime[p] is not changed, then it is a prime
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
    }
        int c=0;
    for (int p = 2; p < n; p++)
        if (prime[p])
            c++;
    mpp[n]=c;
    return c;
    }
    int countPrimes(int n) {
        return Sieve(n);
        
    }
};