class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        myset1, myset2 = {}, {}
        for i in range(len(s)):
            myset1[s[i]] = 1+myset1.get(s[i], 0)
            myset2[t[i]] = 1+myset2.get(t[i], 0)
        if myset1 == myset2:
            return True
        return False
