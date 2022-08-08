class Solution {
public:
    vector<long long> sumOfThree(long long nums) {
        if(nums%3)
        {
            return {};
        }
        vector<long long> ans;
        long long x=(nums-3)/3;
        ans.push_back(x);
        ans.push_back(x+1);
        ans.push_back(x+2);
        return ans;
    }
};
// x+y+z=num
// y=x+1;
// z=x+2;
// 3x+3=nums