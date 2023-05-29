//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class UnionFind {
private:
    vector<int> parent;
    vector<int> rank;

public:
    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    void join(int x, int y) {
        int X = find(x);
        int Y = find(y);
        if (X != Y) {
            if (rank[X] < rank[Y]) {
                parent[X] = Y;
            } else if (rank[X] > rank[Y]) {
                parent[Y] = X;
            } else {
                parent[X] = Y;
                rank[Y]++;
            }
        }
    }
};


class Solution{
  public:
    vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
        // code here
        vector<vector<string>> ans;
        unordered_map<string,int> mpp;
        unordered_map<string,int> index;
        unordered_map<string,int> names;
        unordered_map<int,string> reverse_names;
        set<string> s;//emails
        int x=0;
        for(auto it:accounts)
        {
            string person=it[0];
            names[person]=x;
            reverse_names[x]=person;
            for(int i=1;i<it.size();i++)
            {
                mpp[it[i]]=x;
                s.insert(it[i]);
            }
            x++;
        }
        int c=0;
        unordered_map<int,string> reverse_index;
        for(auto it:s)
        {
            index[it]=c;
            reverse_index[c]=it;
            c++;
        }
        UnionFind d(c);
        for(auto it:accounts)
        {
            string person=it[0];
            for(int i=1;i<it.size()-1;i++)
            {
                d.join(index[it[i]],index[it[i+1]]);//union kar diya
            }
        }
        unordered_map<int,set<int>> sol;
        for(auto it:accounts)
        {
            for(int i=1;i<it.size();i++)
            {
                int parent=d.find(index[it[i]]);
                sol[parent].insert(index[it[i]]);
            }
        }
        unordered_map<int,set<string>> order;
        for(auto it:sol)
        {
            int person=mpp[reverse_index[it.first]];
            for(auto i:it.second)
            {
                order[person].insert(reverse_index[i]);
            }
        }
        for(auto it:order)
        {
            int person=it.first;
            vector<string> v;
            v.push_back(reverse_names[person]);
            for(auto i:it.second)
            {
                v.push_back(i);
            }
            ans.push_back(v);
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
    vector<vector<string>> accounts;

    for (int i = 0; i < n; i++)
    {
      vector<string> temp;
      int x;
      cin >> x;

      for (int j = 0; j < x; j++)
      {
        string s1;
        cin >> s1;
        temp.push_back(s1);
      }
      accounts.push_back(temp);
    }

    Solution obj;
    vector<vector<string>> res = obj.accountsMerge(accounts);
    sort(res.begin(), res.end());
    cout << "[";
    for (int i = 0; i < res.size(); ++i)
    {
      cout << "[";
      for (int j = 0; j < res[i].size(); j++)
      {
        if (j != res[i].size() - 1)
          cout << res[i][j] << ","
               << " ";
        else
          cout << res[i][j];
      }
      if (i != res.size() - 1)
        cout << "], " << endl;
      else
        cout << "]";
    }
    cout << "]"
         << endl;
  }
}
// } Driver Code Ends