// 1539. Kth Missing Positive Number
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int s = 0;
        int e = arr.size();
        int ans =0;

        // using binary sesrch
        while (s<e )
        {
            int mid = s + (e-s)/2;
            
           
            if(arr[mid]-mid-1<k)
            {
                 s= mid+1;
            }
            else{
                e=mid;
            }
            
        }
        
        return s+k;
        




        


        
    }
};
