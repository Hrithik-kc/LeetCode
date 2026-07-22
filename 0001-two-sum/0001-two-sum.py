class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        d={}
        for i in range(len(nums)):
            left=target-nums[i]
            if left in d:
               return [i,d[left]]
            else:
                d[nums[i]]=i
        