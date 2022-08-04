class Solution {
public:
    void say(string &s,int c,int n)
    {
        if(c==n)
        {
            return ;
        }
        string s2;
        int k=1;
        int i=0;
        while(i<=s.size()-1)
        {
            int j=i;
            while((j<s.size()-1) && (s[j]==s[j+1]))
            {
                j++;
                k++;
            }
            s2+=s[i];
            s2+=to_string(k);
            i=j+1;
            k=1;
        }
        c++;
        s.clear();
        i=0;
        s+=s2;
        say(s,c,n);
    }
    string countAndSay(int n) {
        string s;
        s+="1";
        say(s,1,n);
        reverse(s.begin(),s.end());
        return s;
    }
};