// 34. Find First and Last Position of Element in Sorted Array
class Solution {
public:
      int first_acc(vector<int>& arr, int target)
      {
        int s= 0;
        int e= arr.size()-1;
        int mid =s+ (e-s)/2;
        int ind =-1;

        while(s<=e){

            if(arr[mid]==target)
            {
                ind = mid;
                e = mid-1;
            }
            else if(target<arr[mid])
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = (s-e)/2 +e;
        }
        return ind;

      }

int last_acc(vector<int>& arr, int target)
      {
        int s= 0;
        int e= arr.size()-1;
        int mid = (s-e)/2 +e;
        int ind =-1;

        while(s<=e){

            if(arr[mid]==target)
            {
                ind = mid;
                s = mid+1;
            }
            else if(target<arr[mid])
            {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
            mid = (s-e)/2 +e;
        }
        return ind;

      }
    vector<int> searchRange(vector<int>& arr, int target) {

        
        vector<int> ans(2);
        ans[0]=first_acc(arr,target);
        ans[1]=last_acc(arr,target);

        return ans ;

        
        
    }
};
