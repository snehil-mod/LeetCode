
        
class Solution:
    def reverseWords(self, s: str) -> str:
        words = []
        i = 0
        n = len(s)
        while i < n:
            while i < n and s[i] == " ":
                i += 1
            j = i
            while i< n and s[i] != " ":
                i += 1  
            if j< i:
                words.append(s[j:i])
        return " ".join(words[::-1])