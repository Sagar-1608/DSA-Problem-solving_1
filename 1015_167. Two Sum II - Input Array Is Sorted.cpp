// 167. Two Sum II - Input Array Is Sorted
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        // approach 1 two pointer  not

 


        
        // int i = 0;
        // int j = arr.size()-1;
        // while(i<j)
        // {
        //     if(arr[i]+arr[j]>target)
        //         j--;
        //     else if(arr[i]+arr[j]<target)
        //         i++;
        //     if(arr[i]+arr[j]==target)
        //         return {i+1,j+1};
        // }
        // return {};

        //approch 2 binary search 
        int id =0;

        for(int i = 0 ; i<arr.size(); i++)
        {
            int x=arr[i];
            id=i;
            int s=i+1,e=arr.size()-1;
            int mid=s+(e-s)/2;

            while(s<=e){
                if(x+arr[mid]==target)
                    return {id+1,mid+1};

                else if(x+arr[mid]>target){
                    e=mid-1;
                }
                else
                    s=mid+1;
                mid=s+(e-s)/2;
                
           }

         


        }

           return {-1,-1};

    }
        

        
        
    
};
