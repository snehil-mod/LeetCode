class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        #reversal method - right rotation.
        n = len(nums)
        k = k%n
        def reversal(start, end):
            while start < end:
                nums[start], nums[end] = nums[end], nums[start]
                start += 1
                end -= 1
        reversal(0, n-1)
        reversal(0, k-1)
        reversal(k, n-1)
                
        