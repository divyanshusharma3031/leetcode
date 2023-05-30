//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class UnionFind {
public:
    unordered_map<long long,long long> parent;
    unordered_map<long long,long long> rank;
    UnionFind() {
        
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
                parent[Y] = X;
                rank[X]++;
            }
        }
    }
};

class Solution {
  public:
    int maxRemove(vector<vector<int>>& stones, int n) {
        // Code here
        UnionFind d;
        unoredered_map<int,set<int>> row;
        map<int,set<int>> col;
        for(int i=0;i<n;i++)
        {
            long long r=stones[i][0];
            long long c=stones[i][1];
            d.parent[i]=i;
            row[r].insert(i);
            col[c].insert(i);
        }
        unordered_map<long long,int> mpp;
        for(auto it:row)
        {
            auto x=*it.second.begin();
            for(auto i:it.second)
            {
                d.join(x,i);
            }
        }
        for(auto it:col)
        {
            auto x=*it.second.begin();
            for(auto i:it.second)
            {
                d.join(x,i);
            }
        }
        for(int i=0;i<n;i++)
        {
            long long r=stones[i][0];
            long long c=stones[i][1];
            long long y=d.find(i);
            mpp[y]++;
        }
        return n-mpp.size();
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> adj;

        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int i = 0; i < 2; ++i) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;

        cout << obj.maxRemove(adj, n) << "\n";
    }
}
// } Driver Code Ends