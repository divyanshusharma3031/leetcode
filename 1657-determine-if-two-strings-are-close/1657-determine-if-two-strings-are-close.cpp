class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
        {
            return false;
        }
        if(word1==word2)
        {
            return true;
        }
        map<int,int> mpp1;
        map<int,int> mpp2;
        set<int> s1;
        set<int> s2;
        int n=word1.size();
        for(int i=0;i<n;i++)
        {
            mpp1[word1[i]-'a']++;
            mpp2[word2[i]-'a']++;
            s1.insert(word1[i]);
            s2.insert(word2[i]);
        }
        map<int,int> freq1;
        map<int,int> freq2;
        for(auto it:mpp1)
        {
            freq1[it.second]++;
        }
        for(auto it:mpp2)
        {
            freq2[it.second]++;
        }
        return freq1==freq2 && s1==s2;
    }
};