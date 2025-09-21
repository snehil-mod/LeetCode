class Solution:
    def beautySum(self, s: str) -> int:
        sum = 0
        n = len(s)
        counter = {}
        for i in range(n):
            counter.clear()
            for j in range(i, n):
                counter[s[j]] = counter.get(s[j], 0) + 1
                maxval = max(counter.values())
                minval = min(counter.values())
                sum += maxval - minval
        return sum





'''
        for i in range(n):
            counter = Counter()
            for j in range(i, n):
                counter[s[j]] += 1
                sum += max(counter.values()) - min(counter.values())
        return sum
'''