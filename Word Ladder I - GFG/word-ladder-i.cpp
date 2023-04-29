//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    bool validWord(string &s1,string &s2)
    {
        if(s1.length()!=s2.length())
        {
            return false;
        }
        int c=0;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
            }
        }
        return c<=1;
    }
    int wordLadderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        map<string,int> mpp;
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            string s=it.first;
            int c=it.second;
            if(endWord==s)
            {
                return c;
            }
            for(int i=0;i<wordList.size();i++)
            {
                if(validWord(s,wordList[i]) && mpp[wordList[i]]==0)
                {
                    q.push({wordList[i],c+1});
                    if(wordList[i]==endWord)
                    {
                        return c+1;
                    }
                    mpp[wordList[i]]++;
                }
            }
        }
        return 0;
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