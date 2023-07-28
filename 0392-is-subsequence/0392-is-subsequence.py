class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        slength = len(s)
        sindex = 0
        for i in range(len(t)):
            if sindex == slength:
                return True
            elif s[sindex] == t[i]:
                sindex += 1
        
        return sindex == slength