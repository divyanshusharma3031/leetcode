class Solution {
public:
    int maxVowels(string s, int k) {
        int mx=0;
        int c=0;
        for(int i=0;i<k;i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                c++;
            }
        }
        mx=max(c,mx);
        int i=0;
        int j=k;
        int n=s.size();
        while(j<n)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                c--;
            }
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
            {
                c++;
            }
            mx=max(c,mx);
            i++;
            j++;
        }
        mx=max(c,mx);
        return mx;
    }
};