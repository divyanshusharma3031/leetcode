//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void myerase(ordered_set &t, int v){
    int rank = t.order_of_key(v);//Number of elements that are less than v in t
    ordered_set::iterator it = t.find_by_order(rank); //Iterator that points to the (rank+1)th element in t
    t.erase(it);
}

class Solution{
public:
    vector<char> easyTask(int n,string s,int q,vector<vector<string>> &queries)
{
    vector<char> ans;
    vector<ordered_set> v(26);
    for(int i=0;i<n;i++)
    {
        v[s[i]-97].insert(i);
    }
    
    for(int i=0;i<q;i++)
    {
        if(queries[i][0]=="1")
        {
            int ind = stoi(queries[i][1]);
            char c = queries[i][2][0];
            myerase(v[s[ind]-'a'],ind);
            v[c-97].insert(ind);
            s[ind] = c;
        }
        else
        {
            int l = stoi(queries[i][1]);
            int r = stoi(queries[i][2]);
            int k = stoi(queries[i][3]);
            for(int j=25;j>=0;j--)
            {
                int start=v[j].order_of_key(l);
                int end=v[j].order_of_key(r+1);
                int count=end-start;
                if(k>count)
                {
                    k=k-count;
                }
                else
                {
                    ans.push_back(j+'a');
                    break;
                }
            }
        }
    }
    return ans;
}
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int q;
        cin>>q;
        vector<vector<string>> queries(q);
        for(int i=0;i<q;i++){
            string x;
            cin>>x;
            if(x=="1"){
                string p,q;
                cin>>p>>q;
                queries[i]={"1",p,q};
            }
            else{
                string p,q,r;
                cin>>p>>q>>r;
                queries[i]={"2",p,q,r};
            }
        }
        Solution ob;
        vector<char> ans=ob.easyTask(n,s,q,queries);
        for(auto ch:ans){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends