class Solution {
public:
    string makeGood(string s) {
       stack<char> st;
         int diff = 'a'-'A';   //** diff b/w 2 same char (upper & lower)
        for(char c:s){
            if(st.size()==0)st.push(c);
               
            else{
               char a = st.top();
               if((c+diff==a || a+diff==c))st.pop(); //**if upper lower case combination found
               else
                 st.push(c);   
            }

        }

        string ans = "";
        while(st.size()!=0){
           ans = st.top()+ans;
           st.pop();
        }
        
        return ans;
    }
};