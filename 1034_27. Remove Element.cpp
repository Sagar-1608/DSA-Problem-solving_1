// 27. Remove Element
class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int i=0;
        //
        for(auto e: arr)
        {
           if(e!=val) 
           {
                arr[i]=e;
                 i+=1;
              
           }
        }
        return i;
        
    }
};
