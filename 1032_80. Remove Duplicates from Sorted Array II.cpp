// 80. Remove Duplicates from Sorted Array II

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
// using binary search 
    
       int i=0;
        for(auto e: arr)
        {
           if(i==0 || i==1 || arr[i-2]!=e )
           {
                arr[i]=e;
                 i+=1;
              
           }
        }
        return i;
        
    }
};
