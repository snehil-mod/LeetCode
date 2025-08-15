class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        count = 0
        ans = nums[0]
        for i in range(n):
            if ans == nums[i]:
                count += 1
            else:
                count -= 1
                if count == 0:
                    ans = nums[i]
                    count += 1
        
        return ans