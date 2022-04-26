class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>return_intervals;
        sort(intervals.begin(), intervals.end());
        int i=0;
        for(i=0;i<intervals.size();i++)
        {
            int flag=0;
            for(int j=0;j<return_intervals.size();j++)
            {
                if(return_intervals[j][1]>=intervals[i][0])
                {
                    if(return_intervals[j][1]<intervals[i][1])
                        return_intervals[j][1]=intervals[i][1];
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                return_intervals.push_back(intervals[i]);
        }
        return return_intervals;
    }
};