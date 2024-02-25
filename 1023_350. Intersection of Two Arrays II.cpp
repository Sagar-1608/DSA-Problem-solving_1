
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        class Solution ;
       // by using map 
        map<int, int> mp1, mp2;
        for(auto x: nums1) mp1[x]++;
        for(auto x: nums2) mp2[x]++;
        vector<int> ans;

        for(auto i : mp1){
            if(mp2[i.first]){
                int count = min(i.second , mp2[i.first]);
                while(count--)
                {
                    ans.push_back(i.first);
                }
            }
        }
        return ans; 

         
    }
};
        
   
