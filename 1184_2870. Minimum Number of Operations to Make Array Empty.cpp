// 2870. Minimum Number of Operations to Make Array Empty

class Solution {
public:
    int minOperations(vector<int>& nums) {

        unordered_map <int,int> mp;
        for (auto i : nums )
        {
            mp[i]++;
        }

        int count =0;

        for(auto i: mp)
        {
            int second=i.second;
            if(second<2) return -1;
            int temp=(second%3);
            int c=(second/3);
            if(temp==1 || temp==2)
            {
                c++;
            }
            count+=c;

        }
        return count;

        
    }
};
