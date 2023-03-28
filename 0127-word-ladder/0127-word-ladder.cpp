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
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
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