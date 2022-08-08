class Solution:
    def reverseWords(self, s: str) -> str:
        l=s.split(' ');
        ans='';
        for i in l:
            ans=ans+i[::-1];
            ans+=" ";
        return ans[0:len(ans)-1];
        