class Solution {
public:
    int min(int x,int y)
    {
        return (x<y)?x:y;
    }
    int maxArea(vector<int>& height) 
    {
        int max_area=0;
        int i=0;
        int j=height.size()-1;
        //cout<<min(height[i], height[j]);
        int temp=0;
        while(i<j)
        {
            temp=min(height[i],height[j])*(j-i);
            if(temp>max_area)
                max_area=temp;
            (min(height[i],height[j])!=height[i])?(j--):(i++);
        }
        return max_area;
    }
};