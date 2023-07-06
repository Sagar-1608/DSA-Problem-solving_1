// 1027. Longest Arithmetic Subsequence
class Solution {
public:
    int longestArithSeqLength(vector<int>& arr) {

        // using the dp we solved thid question 

        int n = arr.size();
        int ans = 1;

        vector<vector<int>> dp(n , vector<int>(1001,0));

        for(int i =1; i<n; i++)
        {
            for (int j =0; j<i;j++)
            {
                int diff = arr[j]-arr[i]+500 ; 
                // here added 50 for avoiding the -ve index
                 dp[i][diff]= dp[j][diff]>0? dp[j][diff]+1 : 2;

                 ans= max(ans, dp[i][diff]);
                  
            }
        }


  return ans;

        
    }
};
