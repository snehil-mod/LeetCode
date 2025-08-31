class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        count = 0 #counter to count the parenthesis
        temp = []
        for i in s:
            if i == '(':
                count += 1
                if count > 1:
                    temp.append(i)
            else:
                count -= 1
                if count > 0:
                    temp.append(i)
        return ''.join(temp)