class Solution {
public:
    void convertToBinary(vector<int> &bin,int i)
    {
        // cout<<i<<'\n';
        while(i)
        {
            bin.push_back(i%2);
            i=i/2;
        }
        reverse(bin.begin(),bin.end());
    }
    int convertToint(vector<int> &bin)
    {
        
        int ans=0;
        for(int i=bin.size()-1;i>=0;i--)
        {
            ans+=bin[i]*pow(2,bin.size()-1-i);
        }
        return ans;
    }
    int convertToGray(int n)
    {
        vector<int> bin;
        convertToBinary(bin,n);
        vector<int> bin2;
        bin2.push_back(bin[0]);
        for(int i=1;i<bin.size();i++)
        {
            bin2.push_back(bin[i]^bin[i-1]);
            // cout<<bin[i]<<" ";
        }
        // cout<<"\n";
        int ans=convertToint(bin2);
        return ans;
    }
    vector<int> grayCode(int n) {
        vector<int> ans;
        int x=pow(2,n);
        for(int i=0;i<x;i++)
        {
            ans.push_back(i);
        }
        for(int i=1;i<x;i++)
        {
            ans[i]=convertToGray(i);
        }
        return ans;
    }
};