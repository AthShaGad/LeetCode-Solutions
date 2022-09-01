class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>min_cost;
        min_cost.push_back(cost[0]);
        min_cost.push_back(cost[1]);
        for(int i=2;i<cost.size();i++)
        {
            min_cost.push_back(min(cost[i]+min_cost[i-1],cost[i]+min_cost[i-2]));
        }
        return min(min_cost[min_cost.size()-1],min_cost[min_cost.size()-2]) ;
    }
};