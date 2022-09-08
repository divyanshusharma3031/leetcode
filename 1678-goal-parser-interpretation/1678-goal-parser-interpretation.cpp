class Solution {
public:
    string interpret(string command) {
        string ans="";
        int n=command.size();
        for(int i=0;i<n;)
        {
            if(command[i]=='G')
            {
                ans=ans+"G";
                i++;
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                ans=ans+"o";
                i+=2;
            }
            else
            {
                ans+="al";
                i+=4;
            }
        }
        return ans;
    }
};