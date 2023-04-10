class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
                continue;
            }
            if(st.empty())
            {
                return false;
            }
            if(s[i]==')' && st.top()=='(')
            {
                st.pop();
                continue;
            }
            else if(s[i]==')')
            {
                return false;
            }
            if(s[i]==']' && st.top()=='[')
            {
                st.pop();
            }
            else if(s[i]==']')
            {
                return false;
            }
            if(s[i]=='}' && st.top()=='{')
            {
                st.pop();
                continue;
            }
            else if(s[i]=='}')
            {
                return false;
            }
        }
        return st.size()==0;
    }
};