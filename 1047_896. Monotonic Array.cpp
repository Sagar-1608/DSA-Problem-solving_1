// 896. Monotonic Array

class Solution {
public:

    bool isMonotonic(vector<int>& arr) {
        
       int n = arr.size();
      bool increase = true;
      bool decrease = true;
       for(int i = 0; i<n-1;i++)
       {
           if(arr[i]<arr[i+1]) decrease = false;
           if(arr[i]>arr[i+1]) increase = false;

       }
       return decrease || increase;

     
    }
};
