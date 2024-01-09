// Sort an Array
class Solution {
public:
  
  void merge(vector<int> &arr, int s, int e )
  {
    
      int mid= s+ (e-s)/2;
      int l = mid-s+1;
      int r = e-mid;

      // creating the new array 
      int * left = new int [l];
      int * right = new int[r];
      int k = s;
    
      // copy the left part
      for(int i =0; i<l;i++)
      {
          left[i]=arr[k++];
      }
      k = mid+1;
    
       //copy right part 
    
      for(int i=0; i<r;i++)
      {
          right[i]=arr[k++];
      }
      int i =0;
      int j=0;
      k =s;
      
    //merging the element in final array .
    
      while(i<l && j<r)
      {
          if(left[i]<right[j])
          {
              arr[k++]=left[i++];
          }
          else
          {
              arr[k++]= right[j++];
          }
      }
      while(i<l)
      {
          arr[k++]=left[i++];
      }

      while(l<r)
      {
          arr[k++]= right[j++];

      }
    
    //delete the created left and right array 

      delete []left;
      delete []right;

  }

  void mergesort(vector<int> & arr, int s, int e)
   {
    
    // base case ;
       if(s>=e)
       {
           return ;
       }
       int mid = s+ (e-s)/2;
       mergesort(arr, s,mid);
       mergesort(arr,mid+1,e);
       merge(arr,s,e);


   }
    vector<int> sortArray(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        int n = nums.size()-1;
        mergesort(nums,0,n);
        return nums;
        
    }
};
