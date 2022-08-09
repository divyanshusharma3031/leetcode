class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        // cf question
        int pre=0;
        int res=0;
        for(auto x:target)
        {
            res+=max(0,x-pre);
            pre=x;
        }
        return res;
    }
};