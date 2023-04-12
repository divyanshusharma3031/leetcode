class Solution {
public:
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
                else if(str=="..")
                {
                    if(!s.empty())
                        s.pop();
                }
                else
                {
                    reverse(str.begin(),str.end());
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
        while(ans.size()>1 && ans.back()=='/')
        {
            ans.pop_back();
        }
        return ans;
    }
};