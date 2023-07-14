// 300. Longest Increasing Subsequence
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        // by using the dp 
        // T O(n^2)
        int n = nums.size();
    //     int ans=1;

    //     vector<int> dp(n,1);


    //     for(int i=1; i<n ; i++)
    //     {
    //         for(int j=0; j<i; j++)
    //         {
    //             if(nums[j]<nums[i])
    //             {
    //                 dp[i]= max(dp[i], dp[j]+1);
    //                 ans=max(ans, dp[i]);
    //             }
    //         }
    //     }

    //     return ans;
        
    

    
    // T = O(nlog(n))
    vector <int> v;
    for (int i =0; i<n ;i++)
    {
        int index = lower_bound(v.begin(),v.end(),nums[i]) - v.begin();
        // return actual index of givrn number in array 
        //by convertint in increasingg order 

        if(index==v.size())
        {
            v.push_back(nums[i]);
        }
        else v[index]=nums[i];

    }
    return v.size();
    }


};
