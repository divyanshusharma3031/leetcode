//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    typedef vector<pair<int,int>> vpi;
    vpi Construct(vector<int> arr,bool reversed)
    {
        int n=arr.size();
        stack<pair<int,int>> s;
        vpi v1(n);
        v1[0]={1e9,-1};
        if(!reversed)
            s.push({arr[0],0});
        else
        {
            s.push({arr[0],n-1});
        }
        for(int i=1;i<n;i++)
        {
            while(!s.empty() && s.top().first>=arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v1[i]={1e9,-1};
            }
            else
            {
                v1[i]=s.top();
            }
            if(!reversed)
                s.push({arr[i],i});
            else
            {
                s.push({arr[i],n-i-1});
            }
        }
        return v1;
    }
public:
    
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        int n=arr.size();
        vector<int> ans(n,0);
        vpi v1=Construct(arr,false);
        reverse(arr.begin(),arr.end());
        vpi v2=Construct(arr,true);
        reverse(v2.begin(),v2.end());
        for(int i=0;i<n;i++)
        {
            int d1=abs(i-v1[i].second);
            int d2=abs(v2[i].second-i);
            if(v1[i].first==1e9 && v2[i].first==1e9)
            {
                ans[i]=-1;
            }
            else if(v1[i].first==1e9)
            {
                ans[i]=v2[i].second;
            }
            else if(v2[i].first==1e9)
            {
                ans[i]=v1[i].second;
            }
            else
            {
                if(d1<d2)
                {
                    ans[i]=v1[i].second;
                }
                else if(d1>d2)
                {
                    ans[i]=v2[i].second;
                }
                else 
                {
                    if(v1[i].first==v2[i].first)
                    {
                        ans[i]=min(v1[i].second,v2[i].second);
                    }
                    else if(v1[i].first<v2[i].first)
                    {
                        ans[i]=v1[i].second;
                    }
                    else
                    {
                        ans[i]=v2[i].second;
                    }
                }
            }
        }
        return ans;
    }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends