class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False

        hashmap = {}
        for i in range(len(s)):
            if s[i] in hashmap and hashmap[s[i]] != t[i]:
                return False
            elif s[i] not in hashmap and t[i] in hashmap.values():
                return False
            elif s[i] not in hashmap:
                hashmap[s[i]] = t[i]
        return True
                    