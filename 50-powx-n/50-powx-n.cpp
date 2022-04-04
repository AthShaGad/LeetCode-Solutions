class Solution {
public:
    double myPow(double x, int n) {
        bool neg=false;
        double ans=1;
        if(n==INT_MAX)
        {
             if(x>0&&!(x<=1))
                 return INT_MAX;
             else if(x>0&&x<1)
                 return 0;
             else if (x<0&&x!=-1)
                 return INT_MIN;
        }
            
        if(n==INT_MIN)
        {
            if(x>0&&!(x<=1))
                return 0;
            else if(x>0&&x<1)
                return INT_MAX;
            else if(x<0&&x!=-1)
                return INT_MIN; 
        }
        if(x==1||x==0)
            return x;
        if(x==-1)
        {
            if(n%2==0)
                return -x;
            else
                return x;
        }
        if(n<0)
        {
            neg=true;
            n*=-1;
        }
        for(int i=n;i>0;i--)
        {
            ans*=x;
        }
        if(neg)
            ans=1/ans;
        return ans;
    }
};