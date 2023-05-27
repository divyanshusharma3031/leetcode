class TrieNode
{
    public:
        TrieNode *children[26];
        bool isEnd=false; 
};
class Trie
{
    public:
        TrieNode *root;
        Trie()
        {
            root=new TrieNode();
            for(int i=0;i<26;i++)
            {
                root->children[i]=NULL;
            }
        }
        void insert(string &word)
        {
            TrieNode *curr=root;
            for(auto it:word)
            {
                int idx=it-'a';
                if(!curr->children[idx])
                {
                    TrieNode *Node=new TrieNode();
                    for(int i=0;i<26;i++)
                    {
                        Node->children[i]=NULL;
                    }
                    curr->children[idx]=Node;
                }
                curr=curr->children[idx];
            }
            curr->isEnd=true;
        }
        void solve(vector<string> &ans,string &prefix,TrieNode *curr)
        {
            if(ans.size()==3)
            {
                return;
            }
            if(curr->isEnd)
            {
                ans.push_back(prefix);
            }
            for(char c='a';c<='z';c++)
            {
                if(!curr->children[c-'a'])
                {
                    //nothing
                }
                else
                {
                    prefix.push_back(c);
                    solve(ans,prefix,curr->children[c-'a']);
                    prefix.pop_back();
                }
            }
            return;
        }
        vector<string> startsWith(string prefix)
        {
            TrieNode *curr=root;
            for(auto it:prefix)
            {
                int idx=it-'a';
                if(!curr->children[idx])
                {
                    return {};
                }
                curr=curr->children[idx];
            }
            //this curr is the next poiinter of the last character in prefix
            vector<string> ans;
            string starting=prefix;
            solve(ans,starting,curr);
            return ans;
        }
};
class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        Trie *root=new Trie();
        for(auto it:products)
        {
            root->insert(it);
        }
        vector<vector<string>> ans;
        string search="";
        for(int i=0;i<searchWord.size();i++)
        {
            search+=searchWord[i];
            ans.push_back(root->startsWith(search));
        }
        return ans;
    }
};