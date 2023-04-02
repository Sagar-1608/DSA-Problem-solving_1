// 1441. Build an Array With Stack Operations
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {


       vector<string> ans;
       int input=1;
        for(auto i: target)
        {
            while(input<i)
            {
                ans.push_back("Push");
                ans.push_back("Pop");
                input++;
            }
            ans.push_back("Push");
            input++;

        }
        return ans;
        
    }
};
