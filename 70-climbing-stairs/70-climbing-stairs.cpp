class Solution {
public:
    int climbStairs(int n) 
    {
        if(n==2)
            return 2;
        if(n==1)
            return 1;
        vector<int>output_vec;
        output_vec.push_back(1);
        output_vec.push_back(2);
        for(int i=3;i<=n;i++)
            output_vec.push_back(output_vec[i-2]+output_vec[i-3]);
        return output_vec[output_vec.size()-1];
    }
};