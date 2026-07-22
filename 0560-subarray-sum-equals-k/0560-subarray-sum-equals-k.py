class Solution(object):
    def subarraySum(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        # n=len(nums)
        # count=0
        # for i in range (0,n):
        #     sum=0
        #     for j in range(i,n):
        #         sum=sum+nums[j]
        #         if(sum==k):
        #             count+=1
        #             sum=0
        # return count
        d={0:1}
        sum=0
        c=0
        for i in nums:
            sum=sum+i
            left=sum-k
            if left in d:
                c=c+d[left]
            if sum not in d:
                d[sum]=1
            else:
                d[sum]+=1
        return c