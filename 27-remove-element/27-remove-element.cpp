class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> aux;
        for(auto it:nums)
        {
            if(it==val)
            {
                
            }
            else
            {
                aux.push_back(it);
            }
        }
        
        for(int i=0;i<aux.size();i++)
        {
            nums[i]=aux[i];
        }
        return aux.size();
        
    }
};