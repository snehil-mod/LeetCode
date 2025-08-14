#Hashmap Method
def longestSubArray(nums, k):
  n = len(nums)
  max_len = 0
  prefix_sum = 0
  map = {}
  for i, num in enumerate(nums): #enumerate helps in getting index as well as value of index
    prefix_sum += num

    if prefix_sum == k:
      max_len = i+1
    if (prefix_sum - k) in map:
      max_len = max(max_len, i - map[prefix_sum - k])
    if prefix_sum not in map:
      map(prefix_sum) = i

  return max_len
    
