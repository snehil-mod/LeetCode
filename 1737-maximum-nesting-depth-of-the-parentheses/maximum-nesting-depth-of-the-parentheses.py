class Solution:
    def maxDepth(self, s: str) -> int:
        maxm = 0
        counter = 0
        for i in s:
            if i == '(':
                counter += 1
                maxm = max(maxm, counter)
            elif i == ')':
                counter -= 1
        return maxm