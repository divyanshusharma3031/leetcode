class Solution {
public:
    int totalFruit(vector<int> &tree) {
        unordered_map<int, int> count;
        int i, j;
        int mx=1;
        for (i = 0, j = 0; j < tree.size(); ++j) {
            count[tree[j]]++;
            if (count.size() > 2) {
                if (--count[tree[i]] == 0)count.erase(tree[i]);
                i++;
            }
            mx=max(mx,j-i);
        }
        mx=max(mx,j-i);
        return mx;
    }
};