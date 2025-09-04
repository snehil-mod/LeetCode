class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal) or not s or not goal:
            return False
        if goal in s+s:
            return True
        return False