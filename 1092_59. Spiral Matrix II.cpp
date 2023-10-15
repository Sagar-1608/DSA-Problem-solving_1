// 59. Spiral Matrix II
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> ans( n , vector<int> (n, 0)); 

           
        int row= n;
        int col= n;
        
        int count=0;
        int total = row*col;
        
        int startRow = 0;
        int startCol = 0;
        int endRow = row-1;
        int endCol  = col-1; 

        // here total count is m*n
        while(count<total)
        {  
            // printing starting row 
            
            for(int i=startCol;  i<=endCol  && count<total;  i++)
            {
                count++;
                ans[startRow][i]=count;
            }
            startRow++;
            
            //printing ending column 
            
            for(int i=startRow;  i<=endRow &&  count<total;  i++)
            {
                 count++;
                ans[i][endCol]=count;
            }
            endCol--;
            
            
            //print ending row
            for(int i=endCol;  i>=startCol &&  count<total;  i--)
            {
                 count++;
                ans[endRow][i]=count;
            }
            endRow--;
            
            // printing start column
            
            for(int i=endRow;  i>=startRow &&  count<total;  i--)
            {
                count++;
                ans[i][startCol]=count;
            }
            startCol++;
            
                
        }
    return ans;   //complexity-O(n*m) 
        
    }
};
