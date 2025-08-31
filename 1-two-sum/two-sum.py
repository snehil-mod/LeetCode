class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashtable = {}
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in hashtable:
                return i, hashtable[diff]
            hashtable[nums[i]] = i