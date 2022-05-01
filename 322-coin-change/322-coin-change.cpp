class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>change_array;
        sort(coins.begin(), coins.end());
        change_array.push_back(0);
        for(int i=1;i<=amount;i++)
        {
            int temp=INT_MAX-1, j=0;
            while(j<coins.size()&&i>=coins[j])
            {
                temp=min(change_array[i-coins[j]],temp);
                j++;
            }
            change_array.push_back(temp+1);
        }
        // change_array[0]=-1;
        return (change_array[amount]==INT_MAX)?-1:change_array[amount];
    }
};