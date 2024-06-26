// 33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        
        //by using binary search 
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]== target) return mid;

            else if(nums[mid]>=nums[low])
            {
                if(nums[mid]>= target and nums[low]<= target) high=mid-1;
                else low = mid+1;
            }
            else{
                if(nums[mid]<= target and nums[high]>= target) low=mid+1;
                else high=mid-1;



                
            }
        }
        return -1;
        
    }
};

