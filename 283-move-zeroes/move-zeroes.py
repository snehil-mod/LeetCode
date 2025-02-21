class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        j = 0
        if len(nums) == 1:
            print(nums)
        else:
            for i in range(0, len(nums)):
                if nums[i] != 0:
                    nums[j] = nums[i]
                    j += 1
            
            while j < len(nums):
                nums[j] = 0
                j += 1