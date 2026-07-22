class Solution(object):
    def maxProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        h=1
        l=1
        ph=1
        pl=1
        m=max(nums)
        for i in nums:
            h=i*ph
            l=i*pl
            ph=max(h,l,i)
            pl=min(h,l,i)
            if(m<ph):
                m=ph
        return m