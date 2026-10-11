class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        si = [0]*26
        ti = [0]*26

        for i in range (len(s)):
            si[ord(s[i]) - ord('a') ] += 1
            
        for i in range (len(s)):
            
            ti[ord(t[i]) - ord('a')] += 1

        return si == ti           