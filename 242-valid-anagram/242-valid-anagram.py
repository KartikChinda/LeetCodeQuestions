class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
         #Using sort
        if len(s)!=len(t):
            return False
        else:
            if sorted(s)==sorted(t):
                return True
            else:
                return False