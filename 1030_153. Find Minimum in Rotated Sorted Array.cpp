// 153. Find Minimum in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& nums) {
        //using binary search method
         
        int s = 0;
        int e = nums.size()-1;
        
        while(s<e){
            //find mid for further use 
            int mid = s + (e-s)/2;
            //condition for already sorted array but not rotated
            if(nums[s]<nums[e]){
            return nums[s];
            }
            //conditions for rotated sorted array
            if(nums[mid]>=nums[0]){
                s = mid+1;
            }
            else{
                e = mid;
            }
            
        }
        return nums[s];
    }
};
