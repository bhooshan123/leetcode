class Solution(object):
    def isCircularSentence(self, sentence):
        """
        :type sentence: str
        :rtype: bool
        """
        s=sentence.split(" ")
        n=len(s)
        for i in range(0,n-1):
            if s[i][-1] != s[i+1][0]:
                return False
        if s[-1][-1] != s[0][0]:
            return False


        return True