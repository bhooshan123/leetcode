class Solution(object):
    def makeFancyString(self, s):
        """
        :type s: str
        :rtype: str
        """
        result=[]
        c=1
        result.append(s[0])
        for i in range(1,len(s)):
            if s[i] == s[i-1]:
                c+=1
            else:
                c=1
            if c<3:
                result.append(s[i])

        return ''.join(result)
            
            
        