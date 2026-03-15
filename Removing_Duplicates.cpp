class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int count=0;
        
        int i=0;
        while(i < nums.size()){
            int temp=nums[i];
            nums[count]=nums[i];
            count++;
            while(i < nums.size() && temp==nums[i]){
                i++;
            }
        }
        return count;
    }
};