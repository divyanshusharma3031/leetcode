class Solution {
public:
    bool check(map<int,int> &mpp1,map<int,int> &mpp2)
    {
        for(auto it:mpp2)
        {
            if(it.second>mpp1[it.first])
            {
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        map<int,int> mpp;
        int n=s.size();
        int m=t.size();
        string ans="";
        int sz=1e9;
        map<int,int> mpp2;
        for(int i=0;i<m;i++)
        {
            mpp2[t[i]]++;
        }
        int i=0;
        int j=0;
        while(j<n)
        {
            if(mpp2.find(s[j])!=mpp2.end())
            {
                mpp[s[j]]++;
                if(check(mpp,mpp2))
                {
                    
                    int nsz=j-i+1;
                    if(nsz<sz)
                    {
                        // cout<<"hi\n";
                        ans=s.substr(i,j-i+1);
                        // cout<<ans<<"\n";
                        sz=nsz;
                    }
                    while(i<=j)
                    {
                        if(mpp2.find(s[i])!=mpp2.end())
                        {
                            if(mpp[s[i]]==mpp2[s[i]])
                            {
                                break;
                            }
                            mpp[s[i]]--;
                        }
                        i++;
                    }
                    // cout<<i<<" "<<j<<"\n";
                    nsz=j-i+1;
                    if(nsz<sz)
                    {
                        ans=s.substr(i,j-i+1);
                        sz=j-i+1;
                    }
                    
                }
            }
            j++;
        }
        return ans;
    }
};