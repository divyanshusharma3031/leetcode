class Solution {
public:
    int minAddToMakeValid(string s) {
        int n=s.length();
        stack<char> st;
        int min=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            {
                st.push(s[i]);
            }
            else
            {
                if(s[i]==')')
                {
                    if(!st.empty() && st.top()=='(')
                    {
                        st.pop();
                    }
                    else
                    {
                        min++;
                    }
                }
                else if(s[i]==']')
                {
                    if(!st.empty() && st.top()=='[')
                    {
                        st.pop();
                    }
                    else
                    {
                        min++;
                    }
                }
                else
                {
                    if(!st.empty() && st.top()=='{')
                    {
                        st.pop();
                    }
                    else
                    {
                        min++;
                    }
                }
            }
        }
        return min+st.size();
    }
};