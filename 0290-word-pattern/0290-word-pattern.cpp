class Solution {
public:
    bool wordPattern(string pattern, string s) {
        s+=' ';
        int n=pattern.size();
        vector<string> ans;
        int num=s.size();
        string temp ="";
        for(int i=0; i<num; i++){
            if(s[i]==' ') {
                ans.push_back(temp);
                temp = "";
            }
            else
            {
                temp+= s[i];
            }
        }

        if(ans.size() != n) 
        {
            return false;
        }
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(pattern[i] == pattern[j] && ans[i] != ans[j] || pattern[i] != pattern[j] && ans[i] == ans[j]){
                    return false;
                }
            }
        }
        return true;
    }
};