// 66. Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& arr) {

        int n = arr.size()-1;
        
        while(n>=0)
    {
        if(arr[n]==9)
        {  
            arr[n] =0;
        }
        else
        {
            arr[n]= arr[n]+1;
             return arr;
        }
        n--;
        
    }

    arr.insert(arr.begin(),1);
    return arr;  
    }
};
