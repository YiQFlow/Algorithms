class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        k = k%len(nums)
        self.reverse(nums,0,len(nums)-k-1)
        self.reverse(nums,len(nums)-k,len(nums)-1)
        nums.reverse()
    def reverse(self,nums,left,right):
        while left<= right:
            nums[left],nums[right] = nums[right],nums[left]
            left+=1
            right-=1
