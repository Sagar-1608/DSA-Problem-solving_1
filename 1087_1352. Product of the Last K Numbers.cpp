// 1352. Product of the Last K Numbers

/*class ProductOfNumbers {
    vector<int> arr;
public:
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
        arr.push_back(num);
        
    }
    
    int getProduct(int k) {
        int n = arr.size();
        int product=1;

        for(int i=0; i<k;i++)
        {
            product *=arr[n-1];
            n--;


        }
        return product;
        
    }
};
*/

// in above method the thinme required is O(k)kk
// reduce this time and do in o(1) time 
// by using mentain the prefix product array 


class ProductOfNumbers {
    vector<int> arr;
public:
    ProductOfNumbers() {
        arr.clear();
        arr.push_back(1);
        
    }
    
    void add(int num) {
      
    //   creating the prefix product arr when addingg thr new element 
     if(num==0)
     {
         arr.clear();
         arr.push_back(1);
     }
     else
     {
         int last = arr.back(); //last element of array;
         int current_product=last*num;
         arr.push_back(current_product);
     }
        
    }
    
    int getProduct(int k) {
        int n = arr.size()-1;
        if((n-k)<0) return 0;
        else return(arr.back()/arr[n-k]);
        
    }
};

