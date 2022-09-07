class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        arr=text.split(" ");
        dictionary={}#declared an empty dictionary
        c=0;
        for i in brokenLetters:
            dictionary[i]=1;
        for i in arr:
            b=False;
            for x in i:
                if dictionary.get(x)!=None:
                    # print(x);
                    b=True;
                    break;
                else:
                    pass;
            if b==False:
                c=c+1;
        return c;