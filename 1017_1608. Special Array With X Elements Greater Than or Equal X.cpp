// 1608. Special Array With X Elements Greater Than or Equal X
class Solution {
public:
    int specialArray(vector<int>& arr) {

        sort(arr.begin(),arr.end());

        int s=0;
        int  n= arr.size();
        int e=n-1;
        int mid;
         

        while(s<=e)
        {

          int mid= s+(e-s)/2;
          int x = n-mid;

          if(arr[mid]>=x)
          {
              if(mid==0 || arr[mid-1]<x)
               return x;
              else
               e=mid-1;
          }
          else
          {
              s=mid+1;
          }
        }
        return -1;


        
    }
};
