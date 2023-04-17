// 989. Add to Array-Form of Integer
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& arr, int k) {
    //     vector<int> ans;
    //     int n =arr.size();
    //     int i=n-1;
    //     int carry =0;
    //     while(i>=0 && k!=0)
    //     {
    //       int d = k%10;
    //       int val = d + arr[i] + carry;
    //       int put = val%10;
    //       ans.insert(ans.begin(),put);
    //       carry = val/10;

    //       k=k/10;
    //       i--;


    //     }

    //    while(i>=0 )
    //     {
    //         int val = carry + arr[i];
    //         int put = val%10;
    //       ans.insert(ans.begin(),put);
    //       carry = val/10;
    //       i--;

        
    //     }
    //  while(k!=0 )
    //     {
    //         int val = carry+ k%10;
    //         int put = val%10;
    //         ans.insert(ans.begin(),put);
    //         carry = val/10;
    //         k=k/10;

        
    //     }
    //     if(carry>0)
    //      ans.insert(ans.begin(),carry);
    //     return ans;


        //add new approach 
    vector<int>ans;
      int carry=0;
      
     int i=arr.size()-1;
      while(i>=0 || carry>0 || k!=0 )
     {
       if(k!=0)  
       // here we are adding last digit of k in a[i] from last, and if after adding value is greater than 10
                 
      { carry+=k%10;
       k/=10;}
       
        if(i>=0)
       { carry+=arr[i--];}
       
      ans.push_back(carry%10);// than we using carry%10 and left carry is stored by carry/=10 , and used further 
       carry/=10;
     }
      reverse(ans.begin(),ans.end());
      return ans;
    }







        
    
};
