// 46. Permutations

class Solution {
private:
void solve(vector<int> arr, vector<vector<int>> & ans, int index)
{
    if(index>=arr.size())
    {
        ans.push_back(arr);
        return;
    }

    for(int i = index; i<arr.size(); i++)
    {
        // swap with each element and with each position 
        swap(arr[index],arr[i]); 
        solve(arr,ans,index+1);

        // backtarck  that covert your swaped array in original array 

        swap(arr[index],arr[i]);
    }
}
public:

    vector<vector<int>> permute(vector<int>& nums) {
        int index = 0;
        vector<vector<int>> ans;
        solve(nums, ans, index);

        return ans;


        
    }
};
