//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
	int isPossible(vector<vector<int>>graph){
	    // Code here
	    int o = 0;
	    int N=graph.size();
      for(int i  =0 ;i<N;i++){
          int cnt = 0;
          for(int j = 0;j<N;j++){
              if(graph[i][j]==1)
                  cnt++;
          }
          if(cnt%2==1)
              return false;
      }
      return true;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>paths(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cin >> paths[i][j];
		}
		Solution obj;
		int ans = obj.isPossible(paths);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends