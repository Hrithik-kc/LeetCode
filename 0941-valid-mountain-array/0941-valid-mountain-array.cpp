class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i=0;
        while(i<arr.size()-1 && arr[i]<arr[i+1])
        {
            i++;
        }
        if (i==0)
        {
            return false;
        }
        else if(i== arr.size()-1)
        {
                 return false;
        }
        while(i<arr.size()-1 && arr[i]>arr[i+1])
        {
            i++;
        }
        if(i==arr.size()-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
};