class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        m=-float('inf')
        sum=0
        for i in nums:
            if sum+i>i:
                sum=sum+i
            else :
               sum=i
            if m<sum:
                m=sum
        return m
        