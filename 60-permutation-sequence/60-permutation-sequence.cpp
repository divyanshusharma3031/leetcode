class Solution {
public:
    string getPermutation(int n, int k) {
        string s="";
        for(int i=1;i<=n;i++)
        {
            s=s+to_string(i);
        }
        sort(s.begin(),s.end());
        k--;
        while(k--)
        {
            next_permutation(s.begin(),s.end());
        }
        return s;
    }
};