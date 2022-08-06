class Solution {
public:
    vector<vector<string>> ans;
    void dfs(int i,string &s,vector<string> &t,int c)
    {
        int n=s.size();
        if(c<0)
        {
            return;
        }
        if(i>n)
        {
            return;
        }
        if(i==n)
        {
            if(c==0)
                ans.push_back(t);
            return ;
        }
        for(int idx=i;idx<n;idx++)
        {
            string str=s.substr(i,idx-i+1);
            int j=stoi(str);
            if(j==0)
            {
                t.push_back(str);
                dfs(idx+1,s,t,c-1);
                t.pop_back();
                return;
            }
            else if(j>0 && j<=255)
            {
                t.push_back(str);
                dfs(idx+1,s,t,c-1);
                t.pop_back();
            }
            else
            {
                break;
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> t;
        dfs(0,s,t,4);
        // cout<<"hi"<<"\n";
        vector<string> v;
        for(int i=0;i<ans.size();i++)
        {
            string temp;
            for(int j=0;j<ans[i].size();j++)
            {
                temp+=ans[i][j];
                temp+=".";
            }
            if(!temp.empty())
                temp.pop_back();
            v.push_back(temp);
        }
        return v;
    }
};