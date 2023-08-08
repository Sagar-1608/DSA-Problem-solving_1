// 2789. Largest Element in an Array after Merge Operations
class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
         // nums = [2,3,7,9,3]

        int n= nums.size();
        long long maxi=0;
        long long last = nums[n-1];
        
        for(int i=n-2;i>=0;i--)
        {
            long long v = nums[i];
            if(v<=last){
                last=last+v;
                if(last>maxi)
                    maxi=last;
            }
            else{
                if(last>maxi)
                  maxi=last;
               last=v;
            }
            
        }
        return last;
        
    }
};
