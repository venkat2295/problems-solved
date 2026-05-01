class Solution:
    def maxRotateFunction(self, nums: List[int]) -> int:
        n = len(nums)
        total_sum = sum(nums)
        curr =sum(i*nums[i]for i in range(n))
        maxi = curr
        for k in range(1,n):
          curr = curr + total_sum -n * nums[n-k]
          if curr>maxi:
            maxi = curr
        return maxi
