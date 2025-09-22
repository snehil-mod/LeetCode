class Solution:
    def search(self, nums: List[int], target: int) -> int:
        return self.BS(nums, target, 0, len(nums)-1)        
    def BS(self, nums, target, low, high):
        if low > high:
            return -1
        mid = (low + high)//2
        if nums[mid] == target:
            return mid
        elif nums[mid] > target:
            return self.BS(nums, target, low, mid - 1)
        else:
            return self.BS(nums, target, mid + 1, high)
        return -1 
        
        
        # if not nums:
        #     return -1
        # low = 0
        # high = len(nums) - 1
        # while low <= high:
        #     mid = (low + high)//2
        #     if nums[mid] == target:
        #         return mid
        #     elif nums[mid] > target:
        #         high = mid - 1
        #     else:
        #         low = mid + 1
        # return -1