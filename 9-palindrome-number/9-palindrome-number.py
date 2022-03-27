class Solution(object):
    def isPalindrome(self, x):
        x1=x;
        x2=0;
        if x<0:
            return False
        else:
            while x1!=0:
                x2*=10
                x2+=x1%10
                x1/=10
            if x==x2:
                return True
            return False
        