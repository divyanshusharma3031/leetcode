class Solution {
public:
    vector<int> getnumbers(int a,vector<int>&nums)
    {
        int n=nums.size();
        int pos=0;
        int temp=a;
        while(((temp&1)!=1))
        {
            pos++;
            temp=temp>>1;
        }
        int mask=1<<pos;
        int x=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]&mask)
            {
                x=x^nums[i];
            }
        }
        return {x,x^a};
    }
    vector<int> singleNumber(vector<int>& nums) {
        
        int exor=0;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            exor=exor^nums[i];
        }
        
        return getnumbers(exor,nums);
    }
};