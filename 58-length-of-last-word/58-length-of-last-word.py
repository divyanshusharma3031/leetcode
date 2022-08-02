class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        x=s.split(' ');
        x.reverse();
        for i in x:
            if(len(i)!=0):
                return len(i);
        return 0;