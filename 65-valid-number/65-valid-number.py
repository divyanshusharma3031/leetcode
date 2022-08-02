class Solution:
    regex=re.compile(r'^[+-]?((\d*\.\d+)|(\d+(\.\d*)?))([eE][+-]?\d+)?$');
    def isNumber(self, s: str) -> bool:
        return bool(self.regex.match(s.strip()));
        