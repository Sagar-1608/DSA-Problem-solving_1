class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int s= 0, e = arr.size()-1, mid ;
        //using binary search
        while(s<=e)
        {
            mid= s+(e-s)/2;
            if(arr[mid]==target) return mid;
            if(target>arr[mid]) s = mid +1;
            else e= mid-1; 
        }
        return s;
        
    }
};
