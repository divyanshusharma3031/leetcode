class Solution {
public:
    vector<string> bp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void combine(string s,vector<string> &ans,int i,string digits)
    {
        if(i>=digits.length())
        {
            ans.push_back(s);
            return ;
        }
        int n=digits.length();
        for(int j=0;j<bp[digits[i]-'0'].length();j++)
        {
            combine(s+bp[digits[i]-'0'][j],ans,i+1,digits);
        }
        
        return ;
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        
        if(digits.size()==0)
        {
            return ans;
        }
        
        combine("",ans,0,digits);
        
        cout<<ans.size()<<"\n";
        
        return ans;
    }
};