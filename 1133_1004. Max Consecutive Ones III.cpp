// 1004. Max Consecutive Ones III


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {


       // by using the slidinng window 
        int n = nums.size();
        int i=0;
        int j=0;
        int result =0;
        int zeroCount=0;


        while(j<n)
        {
            if(nums[j]==0)
            {
                zeroCount++;
            }

            while(zeroCount>k)
            {
                if(nums[i]==0)
                {
                    zeroCount--;
                }
                i++;
            }

            result = max (result, (j-i+1));
            j++;

        }

        return result;


        
    }
};
