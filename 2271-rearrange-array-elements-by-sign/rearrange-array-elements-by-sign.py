class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        if not nums:
            return

        pos = []
        neg = []
        for i in range(len(nums)):
            if nums[i] > 0:
                pos.append(nums[i])
            else:
                neg.append(nums[i])
        i = 0
        for p,n in zip(pos, neg):
            nums[i] = p
            nums[i+1] = n
            i += 2
        
        return nums