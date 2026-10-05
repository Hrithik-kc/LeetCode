class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        n=len(strs)
        p=strs[0]
        for s in strs:
            while not s.startswith(p):
                p=p[:-1]
        return p

        