class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s) != len(t)):
            return False
        si = [0]*26
       

        for i in range (len(s)):
            si[ord(s[i]) - ord('a') ] += 1
            si[ord(t[i]) - ord('a')] -= 1

        for i in range(len(si)):
            if si[i] != 0: return False

        return True               