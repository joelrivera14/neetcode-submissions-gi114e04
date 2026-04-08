class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sL= list(s)
        tL= list(t)
        sL.sort()
        tL.sort()
        if sL == tL:
            return True
        return False
        

        