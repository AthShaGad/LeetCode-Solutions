class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int l=0;
        int r=people.size()-1;
        // for(int i=0;i<people.size();i++)
        //     cout<<people[i]<<" ";
        int boats=0;
        int set=0;
        int num=people.size();
        int curr_r=r;
        int curr_l=l;
        // cout<<num;
        // while(l<r)
        // {
            while(curr_l<curr_r)
            {
                if(people[curr_l]+people[curr_r]<=limit&&people[curr_r]!=-1&&people[curr_l]!=-1)
                {
                    boats++;
                    people[curr_l]=people[curr_r]=-1;
                    if(num>0)
                        num-=2;
                    // cout<<num<<endl;
                    curr_r--;
                    curr_l++;
                    // l++;
                }
                else
                    curr_r--;
            }
            // l++;
        // }
        // cout<<num;
        boats+=num;
        return boats;
    }
};