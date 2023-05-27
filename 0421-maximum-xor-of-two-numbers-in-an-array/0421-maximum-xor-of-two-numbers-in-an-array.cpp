class TrieNode
{
public:
    TrieNode *child[2];
    bool isEnd = false;
};
class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode();
        for (int i = 0; i < 2; i++)
        {
            root->child[i] = NULL;
        }
    }
    void insert(int num)
    {
        TrieNode *curr = root;
        bitset<32> word(num);
        for (int i=31;i>=0;i--)
        {
            int idx = word[i];
            if (curr->child[idx] == NULL)
            {
                TrieNode *Node = new TrieNode();
                for (int i = 0; i < 2; i++)
                {
                    Node->child[i] = NULL;
                }
                curr->child[idx] = Node;
                curr=Node;
            }
            else
            {
                curr = curr->child[idx];
            }
        }
        curr->isEnd = true;
    }
    bool startsWith(int num)
    {
        TrieNode *curr = root;
        bitset<32> prefix(num);
        for (int i=31;i>=0;i--)
        {
            int idx = prefix[i];
            if (curr->child[idx] == NULL)
            {
                return false;
            }
            else
            {
                curr = curr->child[idx];
            }
        }
        return true;
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie *root=new Trie();
        int n=nums.size();
        vector<string> v;
        for(int i=0;i<n;i+=1)
        {
            root->insert(nums[i]);
        }
        int fans=0;
        for(int i=0;i<n;i++)
        {
            bitset<32> bs(nums[i]);
            int ans=0; 
            TrieNode *t=root->root;
            for(int j=31; j>=0; j--){
                if(t->child[!bs[j]]) ans += (1<<j), t = t->child[!bs[j]]; //Since 1^0 = 1 & 1^1 = 0, 0^0 = 0

                else t = t->child[bs[j]];
            }
            fans=max(ans,fans);
        }
        return fans;
    }
};