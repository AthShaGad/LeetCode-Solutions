class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
            auto x=log(n)/log(4);
        int temp=x;
        return (abs(temp-x)==0);
    }
};