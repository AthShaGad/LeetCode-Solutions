class Solution {
public:
    int fib(int n) 
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        vector<int>fib(n+1, 0);
        fib[1]=1;
        for(int i=2;i<n+1;i++)
        {
            fib[i]=fib[i-2]+fib[i-1];
        }
        return fib[n];
    }
};