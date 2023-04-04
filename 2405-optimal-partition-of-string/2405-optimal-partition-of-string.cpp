class Solution {
public:
    int partitionString(string s) {
        set<int> s1;
        set<int> s2;
        int c=1;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s1.find(s[i])!=s1.end())
            {
                c++;
                s1=s2;
            }
            s1.insert(s[i]);
        }
        return c;
    }
};