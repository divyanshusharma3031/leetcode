class Solution {
public:
    string reversePara(int i,string s,int &np)
    {
        int n=s.length();
        string ans="";
        int x=0;
        while(i<n)
        {
            if(s[i]=='(')
            {
                ans+=reversePara(i+1,s,x);
                i=x;
            }
            else if(s[i]==')')
            {
                np=i;
                reverse(ans.begin(),ans.end());
                return ans;
            }
            else
            {
                ans+=s[i];
            }
            i++;
        }
        return ans;
    }
    string reverseParentheses(string s) {
        stack<char> st;
        int i=0;
        int n=s.length();
        int np=0;
        return reversePara(i,s,np);
    }
};