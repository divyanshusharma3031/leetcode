class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> aux(32,0);
        int i=0;
        while(n)
        {
            aux[i]=n%2;
            n=n/2;
            i++;
        }
        uint32_t a=0;
        reverse(aux.begin(),aux.end());
        for(int i=0;i<aux.size();i++)
        {
            a+=aux[i]*pow(2,i);
        }
        return a;
    }
};