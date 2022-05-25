class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        map<char,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
        }
        stack<char> st;
        map<char,int> vis;
        // st.push(s[0]);
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]--;
            if(vis[s[i]])
            {
                continue;
            }
                
            if(!st.empty() && st.top()<=s[i])
            {
                st.push(s[i]);
            }
            else
            {
                while(!st.empty() && st.top()>s[i] && mpp[st.top()]>0)
                {
                    vis[st.top()]=0;
                    st.pop();

                }
                st.push(s[i]);
            }
            vis[s[i]]=1;
            
        }
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};