class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        sort(stones.begin(), stones.end());
        int i=stones.size()-1;
        int j=i-1;
        while(j>=0)
        {
            int stone1=stones[i];
            int stone2=stones[j];
            if(stone1==stone2)
            {
                stones.erase(stones.begin()+i);
                stones.erase(stones.begin()+ j);
            }
            else if(stone1>stone2)
            {
                stones[i]=stones[i]-stones[j];
                stones.erase(stones.begin()+ j);
            }
            else
            {
                stones[j]=stones[j]-stones[i];
                stones.erase(stones.begin()+ i);
            }
            sort(stones.begin(), stones.end());
            i=stones.size()-1;
            j=i-1;
        }
        if(stones.size()==0)
            return 0;
        return stones[i];
    }
};