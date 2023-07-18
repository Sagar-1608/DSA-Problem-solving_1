// 485. Max Consecutive Ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int one =0;
        int i =0; 
        int n =nums.size();
        int res=0;

        while(i<n)
        {
            if(nums[i]==1)
            {
                one++;
                res = max(res,one);
            }
            else{
                one=0;
            }
          i++;
           
        }

        return res;
        
    }
};
