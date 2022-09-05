class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> ans;
        int a=tomatoSlices-2*cheeseSlices;
        if(a>=0 && a%2==0)
        {
            ans.push_back(a/2);
        }
        else
        {
            return ans;
        }
        int b=4*cheeseSlices-tomatoSlices;
        if(b>=0 && b%2==0)
        {
            ans.push_back(b/2);   
        }
        else
        {
            return {};
        }
        return ans;
    }
};