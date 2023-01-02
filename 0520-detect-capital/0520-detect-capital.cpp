class Solution {
public:
    bool detectCapitalUse(string word) {
        string s=word;
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
        if(s==word)
        {
            return true;
        }
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        if(s==word)
        {
            return true;
        }
        if(word[0]>='A' && word[0]<'Z')
        {
            for(int i=1;i<word.size();i++)
            {
                if(word[i]>='a' && word[i]<='z')
                {
                    
                }
                else
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
        return true;
    }
};