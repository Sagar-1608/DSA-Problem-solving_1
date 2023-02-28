// 169. Majority Element
class Solution {
public:
     int majorityElement(vector<int>& arr) {

//         unordered_map<int,int> mp;
//         int ans ;
//         int n = arr.size();
//         for(auto i : arr)
//         {
//             mp[i]++;
//         }
//         for(auto i : mp)
//         {
//             if(i.second>((n/2)))
//             {
//                 ans= i.first;
//                 break;

//             } 
//         }

// return ans;
// with out space 
int majorityElement(vector<int>& arr) {
        int ele=arr[0];
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(count==0)ele=arr[i];
            count+=(ele==arr[i])?1:-1;
        }
        return ele;






    }

        
    
};
