// 136. Single Number
class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int result =0;

        for ( auto i:nums)
        {
            result = i^result;
        }

        return result;
        
    }
};
