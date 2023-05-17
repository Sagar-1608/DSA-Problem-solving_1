// 2653. Sliding Subarray Beauty

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& arr, int k, int x) {


        vector<int>ans ;
        int n = arr.size();
        unordered_map<int,int> mp;


        // map k-1 elemement count 
        for(int i =0 ; i<(k-1);i++)
        {
            mp[arr[i]]++;

        }

        int start =0;

        for(int i=k-1 ;i<n ;i++)
        {
            mp[arr[i]]++; // counting of element of subarray is complete  

            int beauty =0;
            int count_negative_num=0;

            for(int j=-50; j<0;j++)
            {
                if(mp[j]>0) count_negative_num+=mp[j];
                
                // beauty is found for perticuler subarray 
                if(count_negative_num >= x)
                {
                    beauty = j;
                    break;
                }

            }
            ans.push_back(beauty);
            mp[arr[start]]--;
            start++;

        }

        return ans;


        
    }
};
