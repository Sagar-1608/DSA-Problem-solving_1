// 2140. Solving Questions With Brainpower

class Solution {
public:
    long long mostPoints(vector<vector<int>>& arr) {



       
       int n = arr.size();

       long *ans = new long[n];

       for(int i = n-1 ; i>=0;i--)
       {
        int forwordBigIndex = i + arr[i][1]+1;

         if(forwordBigIndex<n)
         {
             ans[i]=arr[i][0]+ans[forwordBigIndex];

         }
           else{
               ans[i]=arr[i][0];

           }

           if(i<n-1)
           {
               ans[i]=max(ans[i],ans[i+1]);
           }
       }
      return ans[0];
        
    }
};
