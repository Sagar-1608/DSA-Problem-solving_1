
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // unordered_map<int,int> mp;

        // for(auto i:nums)
        // {
        //     mp[i]++;
        // }

        // int  c= 0;

        // for (auto i: mp)
        // {
        //     int n = i.second;
        //      c = c+ (n*(n-1))/2; 
        // }
        // return c;


        // in single traversal 

        int c=0;
        unordered_map<int,int> mp;
        for (auto i: nums)
        {
            c+=mp[i];
            mp[i]++;
        }
        return c;
    }
};
