class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int val=0;
        map<int,int> mpp;
        for(int i=0;i<n;i++)
            {
                mpp[nums[i]]++;
                
            }
        for(auto it:mpp)
            {
                if(it.second==1)
                {
                 val=it.first;
                }
            }
        return val;
    }
};