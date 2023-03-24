class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        int n=chars.size();
        for(int i=0;i<n;)
        {
            char x=chars[i];
            int c=0;
            while(i<n && x==chars[i])
            {
                i++;
                c++;
            }
            if(c>1)
            {
                s+=x;
                s+=to_string(c);
            }
            else
            {
                s+=x;
            }
        }
        for(int i=0;i<s.size();i++)
        {
            chars[i]=s[i];
        }
        return s.size();
    }
};