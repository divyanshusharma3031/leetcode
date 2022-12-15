class Solution {
public:
    vector<string> ans;
    class TrieNode
    {
        
        public:
        bool is_end;
        vector<TrieNode*> children;
            TrieNode()
            {
                is_end=false;
                children.resize(26,NULL);
            }
    };
    class Trie
    {
        TrieNode *root;
        public:
            TrieNode *getroot()
            {
                return root;
            }
            Trie(vector<string>& words){
                root=new TrieNode();
                for(int i=0; i<words.size(); i++)
                {
                    addWord(words[i]);
                }
            }
            void addWord(string &word)
            {
                TrieNode *cur=root;
                for(int i=0;i<word.size();i++)
                {
                    int idx=word[i]-'a';
                    if(cur->children[idx]==NULL)
                    {
                        cur->children[idx]=new TrieNode();
                    }
                    cur=cur->children[idx];
                }
                cur->is_end=true;
            }      
    };
    void findWords(vector<vector<char>>& board,int x,int y,TrieNode *root,string word)
    {
        if(x<0 || x>=board.size() || y<0 || y>=board[0].size() || board[x][y]==' ')
        {
            return;
        }
        if(root->children[board[x][y]-'a']!=NULL)
        {
            word=word+board[x][y];
            root=root->children[board[x][y]-'a']; 
            if(root->is_end==true)
            {
                ans.push_back(word);
                root->is_end=false;
            }
            char w=board[x][y];
            board[x][y]=' ';
            findWords(board,x+1,y,root,word);
            findWords(board,x-1,y,root,word);
            findWords(board,x,y+1,root,word);
            findWords(board,x,y-1,root,word);
            board[x][y]=w;
        }
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        Trie *trie=new Trie(words);
        TrieNode *root=trie->getroot();
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                string x="";
                findWords(board,i,j,root,x);
            }
        }
        return ans;
    }
};