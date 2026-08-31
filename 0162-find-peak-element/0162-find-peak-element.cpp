class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;
        int right=nums.size()-1;
        while(low<right)
        {
            int mid=(low+right)/2;
            if(nums[mid]<nums[mid+1])
            {
                low=mid+1;
            }
            else{
                right=mid;
            }

        }
        return low;
    }
};