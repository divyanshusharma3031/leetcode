class Solution {
public:
    string minWindow(string s, string t) {
        int i=0;
        int n=s.length();
        
        int m=t.length();
        
        if(m>n)
        {
            return "";
        }
        
        map<int,int> mpp;
        
        for(int i=0;i<m;i++)
        {
            mpp[t[i]]++;
        }
        
        
        int count=mpp.size();
        
        vector<pair<int,int>> window;
        
        i=0;
        int j=0;
        while(j<n)
        {
            if(mpp.find(s[j])!=mpp.end())
            {
                mpp[s[j]]--;
                if(mpp[s[j]]==0)
                {
                    count--;
                    if(count==0)
                    {
                        while(i<j)
                        {
                            if(mpp.find(s[i])!=mpp.end())
                            {
                                if(mpp[s[i]]==0)
                                {
                                    break;
                                }
                                else if(mpp[s[i]]<0)
                                {
                                    mpp[s[i]]++;
                                }
                            }
                            i++;
                        }
                        window.push_back({j-i+1,i});
                        count++;
                        mpp[s[i]]++;
                        i++;
                    }
                }
            }
            j++;
        }
        if(window.size()==0)
        {
            return "";
        }
        sort(window.begin(),window.end());
        int x=window[0].second;
        string ans="";
        int l=window[0].first;
        int u=x+l;
        while(x<u)
        {
            ans+=s[x];
            x++;
        }
        return ans;
    }
};