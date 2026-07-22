class Solution(object):
    def checkSubarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        d={0:-1}
        sum=0
        for i in range(0,len(nums)):
            sum=sum+nums[i]
            rem=sum%k
            if rem in d:
                if i-d[rem]>1:
                    return True
            else:
                d[rem]=i
                
        return False