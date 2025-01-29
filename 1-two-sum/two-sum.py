class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numtoIndex = {}
        for i, num in enumerate(nums):
            if target - num in numtoIndex:
                return numtoIndex[target-num], i
            numtoIndex[num] = i