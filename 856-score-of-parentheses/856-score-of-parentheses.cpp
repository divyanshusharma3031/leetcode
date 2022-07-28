class Solution {
public:
    int scoreOfParentheses(string s) {
        char p='#';
        int ans=0;
        int c=0;
        
        for(auto i:s)
        {
            if(i=='(')
            {
                c++;
            }
            else
            {
                c--;
                if(p=='(')//the current is a closing bracket and previous in( it will always form a valid answer
                {
                    ans=ans+ceil(pow(2,c));
                }
            }
            p=i;
        }
        return ans;
    }
};

// ()->1 score
// ()()=1+1=2
// (())=2*1=2;
// ((()))=2*2=4;
// 