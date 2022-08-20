class Solution {
public:
    // int profit_calc(vector<int>profit, vector<int>prices, int k)
    // {
    //     int min=prices[0];
    //     int max_profit=profit[0];
    //     for(int i=1;i<k;i++)
    //     {
    //         if(prices[i]<min)
    //             min=prices[i];
    //         if(profit[i]>max_profit)
    //             max_profit=profit[i];
    //     }
    //     return min<prices[k]?(prices[k]-min>max_profit?prices[k]-min:max_profit):max_profit; 
    // }
    int maxProfit(vector<int>& prices) 
    {
        // vector<int>profit(prices.size(),0);
        // int k=1;
        // while(k<profit.size())
        // {
        //     profit[k]=profit_calc(profit, prices, k);
        //     k++;
        // }
        // return profit[profit.size()-1];
        int minPrice=INT_MAX;
        int max_profit=0;
        for(int i=0;i<prices.size();i++)
        {
            minPrice=min(minPrice, prices[i]);
            max_profit=max(max_profit, prices[i]-minPrice);
        }
        return max_profit;
    }
};