class Solution:
    def romanToInt(self, s: str) -> int:
        ans = 0
        roman = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000,
        }
        n = len(s)
        for i in range(n-1):
            if roman[s[i]] < roman[s[i+1]]:
                ans=ans - roman[s[i]]
            else:
                ans = ans + roman[s[i]]
        
        return ans + roman[s[n-1]]

            