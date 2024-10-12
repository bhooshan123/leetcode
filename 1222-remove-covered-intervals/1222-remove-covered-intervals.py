class Solution(object):
    def removeCoveredIntervals(self, intervals):

        """
        :type intervals: List[List[int]]
        :rtype: int
        """
        a=0
        intervals.sort(key=lambda x: (x[0],-x[1]))
        prev=0
        for interval in intervals:
            if interval[1] <= prev:
                a+=1
            else:
                prev=interval[1]
            
        return len(intervals)-a
