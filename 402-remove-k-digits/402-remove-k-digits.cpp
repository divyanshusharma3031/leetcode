class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<pair<char,int>> s;
        int n=num.length();
        if(n==1 && k!=0)
        {
            return "0";
        }
        s.push({num[0],0});
        int x=0;
        map<int,int> mpp;
        for(int i=1;i<n;i++)
        {
            if(!s.empty() && s.top().first<=num[i])
            {
                s.push({num[i],i});
            }
            else
            {
                while(!s.empty() && (s.top().first>num[i]) && x<k)
                {
                    mpp[s.top().second]++;
                    s.pop();
                    x++;
                }
                s.push({num[i],i});
            }
        }
        if(x!=k)
        {
            while(!s.empty() && x<k)
            {
                mpp[s.top().second]++;
                s.pop();
                x++;
            }
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(mpp[i]!=0)
            {
                
            }
            else
            {
                ans+=num[i];
            }
        }
        if(ans.length()==0)
        {
            return "0";
        }
        int i=0;
        while(i<ans.size() && ans[i]=='0')
        {
            i++;
        }
        if(ans.substr(i).length()==0)
        {
            return "0";
        }
       return ans.substr(i);
    }
};