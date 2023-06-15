// 441. Arranging Coins
class Solution {
public:
    int arrangeCoins(int n) {

        // approach 1 O(n)
      
    //   if(n<2) return 1;
 
    //     int i =1;
    //     while(n>=0)
    //     {
    //         n=n-i;
    //         i++;
    //     }
    //     return i-2;


  //    approach 2 O(log(n))
  // binary search
        // binary search apporach 

  int  long long  s = 0;
  int long long e = n;
  int long  long ans=0;
  int long long mid ;
  while(s<=e)
  {
   mid = s +(e-s)/2;
      long long  k = (mid*(mid+1))/2;

      if(k<=n)
      {
          ans =mid;
          s=mid+1;

      }
      else
      {
          e=mid-1;
      }
  }
  return ans;


  //    approach 3 O(n)
  // k(k+1)/2 <= n 
  //k^2 + k -2n=0
  // to solve this  
  //we got k = (sqrt(2n+1/4)-1/2)



    //    int long long  k=0;
    //     k=(sqrt(2*n+0.25) - 0.5);
    //     return k;

        
    }
};
