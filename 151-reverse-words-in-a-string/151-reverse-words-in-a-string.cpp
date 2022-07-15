class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=s.size()-1;
        int n=s.size();
        while(i<j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
        i=0;
        while(i<n)
        {
            int j=i+1;
            while(j<n && s[j]!=' ')
            {
                j++;
            }
            int k=j;
            j--;
            while(i<j)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            i=k;
            while(i<n && s[i]==' ')
            {
                i++;
            }
        }
        i=0;
        string str;
        while(i<n && s[i]==' ')
        {
            i++;
        }
        while(i<n)
        {
            if(s[i]==' ')
            {
                while(i<n && s[i]==' ')
                {
                    i++;
                }
                str.push_back(' ');
            }
            else
            {
                str.push_back(s[i]);
                i++;
            } 
        }
        j=str.size()-1;
        while(j>=0 && str[j]==' ')
        {
            j--;
        }
        return str.substr(0,j+1);
    }
};