class Solution:
    def beautySum(self, s: str) -> int:
        sum = 0
        n = len(s)
        for i in range(n):
            counter = Counter()
            for j in range(i, n):
                counter[s[j]] += 1
                sum += max(counter.values()) - min(counter.values())
        return sum