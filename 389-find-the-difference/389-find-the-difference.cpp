class Solution {
public:
    char findTheDifference(string s, string t) {
        int x=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            x=x^s[i]^t[i];
        }
        x=x^(t[t.length()-1]);
        return x;
    }
};