from collections import defaultdict
class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        if not nums:
            return 0
        freq_map = defaultdict(int)
        freq_map[0] = 1
        n = len(nums)
        prefix_sum = 0
        count = 0
        for i in nums:
            prefix_sum += i
            if prefix_sum - k in freq_map:
                count += freq_map[prefix_sum - k]
            freq_map[prefix_sum] += 1
        return count

        # count = 0
        # for i in range(len(nums)):
        #     summ = 0
        #     for j in range(i, len(nums)):
        #         summ += nums[j]
        #         if(summ == k):
        #             count += 1
                    
        # return count