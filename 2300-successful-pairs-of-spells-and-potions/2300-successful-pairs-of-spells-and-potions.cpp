class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> ans;
        int n=spells.size();
        for(int i=0;i<n;i++)
        {
            long long req=(success+spells[i]-1)/spells[i];//gives effective ceil value
            int idx=lower_bound(potions.begin(),potions.end(),req)-potions.begin();
            ans.push_back(max(0,int(potions.size())-idx));
        }
        return ans;
    }
};