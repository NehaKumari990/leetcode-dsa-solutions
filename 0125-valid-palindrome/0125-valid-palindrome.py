class Solution:
    def isPalindrome(self, s: str) -> bool:

        s = s.lower()

        s1 = ""

        for ch in s:
            if ch.isalnum():
                s1 += ch

        s2 = s1[::-1]

        if len(s1) != len(s2):
            return False

        else:
            for i in range(len(s1)):
                if s1[i] != s2[i]:
                    return False

        return True
        
        
        