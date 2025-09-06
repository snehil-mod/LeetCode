class Solution:
    def maxDepth(self, s: str) -> int:
        stack = []
        maxm = 0
        counter = 0
        for i in s:
            if i == '(':
                stack.append(i)
                counter += 1
                maxm = max(maxm, counter)
            elif i == ')':
                stack.pop()
                counter -= 1
        return maxm