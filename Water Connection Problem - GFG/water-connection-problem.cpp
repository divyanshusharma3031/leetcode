// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

typedef pair<int,int> pii;
class Solution
{
   public:
        // vector<int> s(120,0);
        // vector<int> e(120,0);
        // vector<int> di(120,0);
        map<int,int> s;
        map<int,int> e;
        map<int,int> di;
        static bool compare(pair<pii,int> p1,pair<pii,int> p2)
        {
            return p1.second<p2.second;
        }
        int dfs(int w,int &ans)
        {
            if(s[w]==0)
            {
                return w;
            }
            ans=min(ans,di[w]);
            return dfs(s[w],ans);
        }
        vector<vector<int>> solve(int n,int p,vector<int> a,vector<int> b,vector<int> d)
        {
            
            for(int i=0;i<p;i++)
            {
                s[a[i]]=b[i];
                di[a[i]]=d[i];
                e[b[i]]=a[i];
            }
            vector<vector<int>> an;
            for(int i=1;i<=n;i++)
            {
                if(e[i]==0 && s[i])
                {
                    int ans=INT_MAX;
                    int w=dfs(i,ans);
                    an.push_back({i,w,ans});
                }
            }
            
            return an;
        } 
};

// { Driver Code Starts.
int main()
{
	int t,n,p;
	cin>>t;
	while(t--)
    {
        cin>>n>>p;
        vector<int> a(p),b(p),d(p);
        for(int i=0;i<p;i++){
            cin>>a[i]>>b[i]>>d[i];
        }
        Solution obj;
        vector<vector<int>> answer = obj.solve(n,p,a,b,d);
        cout<<answer.size()<<endl;
        for(auto i:answer)
        {
            cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<endl;
        }
        
    }
	return 0;
}  // } Driver Code Ends