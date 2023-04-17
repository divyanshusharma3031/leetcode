class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest=0;
        for(auto it:candies)
        {
            greatest=max(greatest,it);
        }
        vector<bool> ans;
        for(auto it:candies)
        {
            it=it+extraCandies;
            if(it>=greatest)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};