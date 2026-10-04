class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        count = [0]*26
        n = len(s)

        for i in range (0,n):
            count[ord(s[i])-ord('a')] += 1 
            count[ord(t[i])-ord('a')] -= 1
        
        for i in range (0,len(count)):
            if count[i] != 0:
                return False    
        return True