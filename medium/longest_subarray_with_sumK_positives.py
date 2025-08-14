#sliding window is used
def longestSubarray(nums, k):
  n = len(nums)
  left = 0
  max_len = 0
  sum = 0
  for right in nums:
    sum += nums[right]
    while sum > k:
      sum -= nums[left]
      left += 1
    if sum == k:
      max_len = max(max_len, right - left + 1)
  return max_len
  
