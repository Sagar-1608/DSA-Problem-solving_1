class Solution {
public:
    int longestSubarray(vector<int>& nums) {

    //     vector <int> count;
    //     int n = nums.size();
    //     count.push_back(0);

    //     for(int i =0; i<nums.size();i++)
    //     {
    //         if(nums[i]!=1)
    //         {
    //             count.push_back(i+1);
    //         }
    //     }
         
    //     count.push_back(n+1);
       

    //     int c  = count.size();
    //     if(c-2==0)
    //     {
    //         return n-1;
    //     }
    //     // if(c-2==n);
    //     // {
    //     //     return 0;
    //     // }

    //    int result =0;
    //     for(int i =1; i<c-1;i++)
    //     {
    //         int atOne = (count[i+1]-count[i-1] -2);
    //         result = max(result, atOne);
    //     }

    //     return result;


        // without using space 
        int i=0, j=0, count=0, ans=0, n=nums.size();

        while(j<n){
            if(nums[j]==0)
            count++;
            
            while(count>1)
            {
                if (nums[i]==0)
                count--;
                i++;
            }
            ans=max(ans,j-i);
            j++;
        }
    return ans;

      
        
    }
};
