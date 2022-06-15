class Solution {
public:
    map<vector<int>,int> mpp;
    int binaryToDecimal(vector<int> n)
    {
        // if(mpp[n])
        // {
        //     return mpp[n];
        // }
        vector<int> num = n;
        int dec_value = 0;

        // Initializing base value to 1, i.e 2^0
        int base = 1;

        int len = num.size();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] == 1)
                dec_value += base;
            base = base * 2;
        }
        mpp[n]=dec_value;
        return dec_value;
    }
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        
        vector<int> ans;
        
        vector<int> c(n,0);
        
        int x=0;
        
        for(int i=0;i<n;i++)
        {
            x=x^(nums[i]);
            c[i]=x;
        }
        
        vector<vector<int>> aux;
        
        for(int i=0;i<n;i++)
        {
            int temp=c[i];
            
            int pos=0;
            int u=maximumBit-1;
            vector<int> v;
            while(pos<maximumBit)
            {
                if(temp&(1<<pos))
                {
                    v.push_back(0);
                }
                else
                {
                    v.push_back(1);
                }
                pos++;
            }
            reverse(v.begin(),v.end());
            aux.push_back(v);
        }
        for(int i=0;i<aux.size();i++)
        {
            int a=binaryToDecimal(aux[i]);
            ans.push_back(a);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};