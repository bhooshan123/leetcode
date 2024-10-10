class Solution(object):
    def maxWidthRamp(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)
        r=0
        indexed=[(nums[i],i) for i in range(n)]
        indexed.sort()
        a=n
        for value,index in indexed:
            r=max(r,index-a)
            a=min(a,index)
        return r


        