// 209. Minimum Size Subarray Sum

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        

        int n = nums.size();

        int i = 0, j=0;

       int minLength =n+1;
       int  sum =0; 

        while(j<n)
        {
            sum += nums[j];

            // checking to possible size is minimum from i side 
            while(sum>=target) 
            {
                minLength = min(minLength, (j-i+1));
                sum-=nums[i];
                i++;
            }
            j++;

        }

        return minLength==n+1 ? 0:minLength;
    }
};
