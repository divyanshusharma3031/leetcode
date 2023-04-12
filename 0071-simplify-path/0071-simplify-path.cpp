class Solution {
public:
    string remove(string &str)
    {
        int n=str.size();
        stack<int> s;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='/')
            {
                if(!s.empty() && s.top()=='/')
                {
                    continue;
                }
            }
            s.push(str[i]);
        }
        string ans="";
        while(!s.empty())
        {
            ans+=s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans.back()=='/' && ans.size()!=1)
        {
            ans.pop_back();
        }
        return ans;
    }
    string simplifyPath(string path) {
        path.push_back('/');
        int n=path.size();
        stack<string> s;
        // current path ends when a / is achieved
        string str="";
        bool b=true;
        for(int i=0;i<n;i++)
        {
            if(path[i]=='/')
            {
                if(str=="." || str.empty())
                {
                    str="";
                    continue;
                }
                if(str=="..")
                {
                    // cout<<" ";
                    if(!s.empty())
                        s.pop();
                    str="";
                    continue;
                }
                else
                {
                    reverse(str.begin(),str.end());
                    // cout<<str<<"\n";
                    s.push(str);
                }
                str="";
            }
            else
            {
                str+=path[i];
            }
        }
        string ans="";
        while(!s.empty())
        {
            ans+=s.top();
            ans+="/";
            s.pop();
        }
        ans="/"+ans;
        reverse(ans.begin(),ans.end());
        // cout<<ans<<endl;
        return remove(ans);
    }
};