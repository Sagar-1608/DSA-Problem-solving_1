// 300. Longest Increasing Subsequence
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        // by using the dp 
        int n = nums.size();
        int ans=1;

        vector<int> dp(n,1);


        for(int i=1; i<n ; i++)
        {
            for(int j=0; j<i; j++)
            {
                if(nums[j]<nums[i])
                {
                    dp[i]= max(dp[i], dp[j]+1);
                    ans=max(ans, dp[i]);
                }
            }
        }

        return ans;
        
    }



};
