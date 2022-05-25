class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int req=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
                if(!st.empty())
                {
                    req=max(req,i-st.top());
                }
                else
                {
                    st.push(i);
                }
            }
        }
        return req;
    }
};