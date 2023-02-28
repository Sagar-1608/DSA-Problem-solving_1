class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m= matrix.size();   //number of row  
        int n= matrix[0].size();  // number of col
        int s=0;
        int e=m*n-1;
        
        
        //binary search
        while(s<=e)
        {
            int mid= (s+e)/2;
            int element = matrix[mid/n][mid%n];
            
                if(element ==target)
                {
                    return 1;
                }
            if(element < target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return 0;
        
    }
};
