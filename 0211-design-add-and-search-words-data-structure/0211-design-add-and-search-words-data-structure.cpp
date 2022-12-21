class Trie {
public:
    Trie() {}
    void insert(string word) {
        Trie* node = this;
        for (char ch : word) {
            ch -= 'a';
            if (!node->next[ch]) { node->next[ch] = new Trie(); }
            node = node->next[ch];
        }
        node->isword = true;
    }
    bool search(Trie *node,string &word,int i)
    {
        if(i==word.size())
        {
            return node->isword;
        }
        if(word[i]=='.')
        {
            bool b=false;
            for(int j=0;j<26;j++)
            {
                if(!node->next[j])
                {
                }
                else
                {
                    b=b|search(node->next[j],word,i+1);
                }
            }
            return b;
        }
        else
        {
            int x=word[i]-'a';
            if(!node->next[x])
            {
                return false;
            }
            return search(node->next[x],word,i+1);
        }
    }
    bool search(string &word) {
        Trie* node = this;
        return search(node,word,0);
    }
private:
    Trie* next[26] = {};
    bool isword = false;
};

class WordDictionary {
public:
    Trie t;
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        t.insert(word);
    }
    
    bool search(string word) {
        return t.search(word);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */