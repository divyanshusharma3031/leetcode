typedef vector<int> vi;
class Solution {
public:
    bool isAnagram(string s, string t) {
        vi arr1(26,0);
        vi arr2(26,0);
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            arr1[s[i]-'a']++;
            arr2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr1[i]!=arr2[i])
            {
                return false;
            }
        }
        return true;
    }
};