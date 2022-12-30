class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> v;
        int o=n;
        while(n>0)
        {
            v.push_back(n%10);
            n=n/10;
        }
        reverse(v.begin(),v.end());
        next_permutation(v.begin(),v.end());
        long long ans=0;
        for(auto it:v)
        {
            ans=ans*10+it;
        }
        if(o>=ans || ans>INT_MAX)
        {
            return -1;
        }
        return ans;
    }
};