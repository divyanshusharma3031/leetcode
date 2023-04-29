//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
    int bfs(vector<int> arr[], int cv, int dest)
{
    unordered_set<int> s;
    queue<int> q;
    int level=1;

    q.push(cv);
    s.insert(cv);

    while(q.size())
    {
        int size = q.size();
        level++;
        for(int i=0;i<size;i++)
        {
            int front = q.front();
            q.pop();

            for(int j=0;j<arr[front].size();j++)
            {
                if(arr[front][j]==dest){return level;}
                if(s.count(arr[front][j])){continue;}
                
                q.push(arr[front][j]);
                s.insert(arr[front][j]);
            }
        }
    }
    return 0;
}

int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) 
{
    int wl = wordList.size();
    int wll = wordList[0].length();
    bool check = true;
    int cv;
    int dest;
    for(int i=0;i<wl;i++)
    {
        if(wordList[i]==startWord){check=false; cv = i;}
        if(wordList[i]==targetWord){dest = i;}
    }
    if(check){wordList.insert(wordList.begin(),startWord); cv=0; dest++;}
    
    wl = wordList.size();
    vector<int> arr[wl];
    
    for(int i=0;i<wl;i++)
    {
        for(int j=i+1;j<wl;j++)
        {
            int count=0;
            for(int p=0;p<wll;p++)
            {
                if(wordList[i][p]!=wordList[j][p])
                {count++;}
            }
            if(count==1)
            {
                arr[i].push_back(j);
                arr[j].push_back(i);
            }
        }
    }
    return bfs(arr, cv, dest);
}
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		int ans = obj.wordLadderLength(startWord, targetWord, wordList);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends