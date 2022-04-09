class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> frequency;
        for(int i=0;i<nums.size();i++)
            frequency[nums[i]]++;
        auto comp_func=[&frequency](int i, int j)
        {
            return frequency[i]>frequency[j];
        };
        
        priority_queue<int, vector<int>, decltype(comp_func)>heap(comp_func);
        
        for(pair<int,int>p:frequency)
        {
            heap.push(p.first);
            if(heap.size()>k)
                heap.pop();
        }
        vector<int> high(k);
        for(int i=k-1;i>=0;i--)
        {
            high[i]=heap.top();
            heap.pop();
        }
        return high;
    }
    
};