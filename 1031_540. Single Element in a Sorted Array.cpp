// 540. Single Element in a Sorted Array
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        // by using binary srearch
        int n =arr.size();
        int s =0;
        int e = n-1,mid;
        

        while(s<e)
        {
           mid = s+(e-s)/2;
if((mid%2==0 && arr[mid]==arr[mid+1]) || (mid%2==1 && arr[mid]==arr[mid-1]))
           s=mid+1;
         else e=mid;

        }
        return arr[s];
        
    }
};
