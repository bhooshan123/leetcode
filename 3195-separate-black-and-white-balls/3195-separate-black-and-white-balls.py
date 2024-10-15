class Solution(object):
    def minimumSteps(self, s):
        """
        :type s: str
        :rtype: int
        """
        ans = 0
        blackCount = 0 
        for ch in s:
            if ch == '0':
                ans += blackCount
            else:
                blackCount += 1

        return ans
            

       
        


        