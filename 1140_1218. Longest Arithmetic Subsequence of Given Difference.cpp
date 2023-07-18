// 1218. Longest Arithmetic Subsequence of Given Difference

class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
          
           // this code gives TLE


        // int n = arr.size();
        // int ans =0;
        // for (int i=0;i<n-1;i++)
        // {
        //     int prev = arr[i];
        //     int count =0;
        //     for(int j =i+1;j<n;j++)
        //     {
        //         int curr = arr[j];
        //         if(curr-prev==diff)
        //         {
        //             count++;
        //             prev=curr;

        //         }

        //     }

        //     ans= max(ans,count);
        // }
        // return ans+1;

        //by using unorder map 
        // in map we store the curr element and itd length in subsequency
        // test case 1
        // eg 1-1  2-2 because (2-diff)=1 is presesent in map so 1 ka count +1 =2
        // for 3 - 3 beacause 3-diff = 2 do 2 ka count + 1 = 3 and so on 

        unordered_map <int, int> m;
        int n = arr.size();
        int res = 0;

        for (int i=0;i<n;i++)
        {   
            int curr = arr[i];
            int prev = arr[i]-diff;

            int lengthTill = m[prev]+1;

            m[curr]=lengthTill;

            res = max(res,lengthTill);
        }
        return res;
    }
};
