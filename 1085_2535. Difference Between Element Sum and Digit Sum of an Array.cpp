
// 2535. Difference Between Element Sum and Digit Sum of an Array

class Solution {
    int digitSum(int a)
    {   
        int sum=0;
        while(a!=0)
            
        {
            sum += a%10;
            a=a/10;

        }
        return sum;
    }
public:
    int differenceOfSum(vector<int>& nums) {
        int digitsum=0;
        int sum=0;
        for(auto i : nums)
        {
            sum+=i;
            digitsum+=digitSum(i);

        }
        int ans =abs(sum-digitsum);

        return ans;
        
        
    }
};
