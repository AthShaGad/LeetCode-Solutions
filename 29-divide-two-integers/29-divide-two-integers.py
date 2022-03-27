class Solution(object):
    def divide(self, dividend, divisor):
        if dividend == -2147483648 and divisor == -1: return 2147483647
        neg=0
        if divisor<0 or dividend<0:
            neg=1
        if divisor<0 and dividend<0:
            neg=0
        dividend=abs(dividend)
        divisor=abs(divisor)
        ans=0
        while dividend>=divisor:
            b=0
            while divisor<<b<=dividend:
                b+=1
            dividend-=divisor<<b-1
            ans+=1<<b-1
            
        return -ans if neg==1 else ans
            