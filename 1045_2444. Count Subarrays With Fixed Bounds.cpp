// 2444. Count Subarrays With Fixed Bounds
class Solution {
public:
    long long countSubarrays(vector<int>& arr, int minK, int maxK) {

        long res =0;
        int minKfound =0;
        int maxKfound =0;

        int start =0;
        int minstart =0;


        int maxstart =0;

        for(int i = 0; i<arr.size(); i++)
        {

            int n = arr[i];

            if(n<minK || n>maxK)
            {
                minKfound=0;
                maxKfound=0;
                start = i+1;
            }

            if(n==minK)
            {
                minKfound=1;
                minstart=i;
            }

            if(n==maxK)
            {
                maxKfound=1;
                maxstart = i;
            }
            if(minKfound && maxKfound)
            {
                res+=(min(minstart, maxstart) - start + 1);
            }
        }
        return res;

    }
};
        
