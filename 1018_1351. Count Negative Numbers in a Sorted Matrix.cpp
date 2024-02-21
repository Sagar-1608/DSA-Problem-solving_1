// 1351. Count Negative Numbers in a Sorted Matrix


class Solution {
public:
    int countNegatives(vector<vector<int>>& mat ) {

        int row = mat.size();
        int col = mat[0].size();
        int r=0;
        int negative=0;

        while(r<row)
        {
            int s = 0;
            int e = col-1;
            int mid;
            while(s<=e)
            {
                mid=s+(e-s)/2;

                if(mat[r][mid]>=0)
                {
                    s = mid+1;
                    
                }
                else if(mat[r][mid]<0)
                {
                    e=mid-1;
                }

            }
            negative +=col-s;
            r++;

        }
        return negative;
        
    }
};
