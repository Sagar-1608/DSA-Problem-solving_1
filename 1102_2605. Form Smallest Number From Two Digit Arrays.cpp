// 2605. Form Smallest Number From Two Digit Arrays
class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v1(10,0),v2(10,0);
        for(auto &i: nums1)v1[i]++;
        for(auto &i: nums2)v2[i]++;
        int i,j;
        for(i = 1; i <= 9; i++){
            if(v1[i]&&v2[i])return i;
        }
        int ans = 100;
        for(i =1; i <= 9; i++){
            if(v1[i]){
                for(j = 1; j <= 9; j++){
                    if(v2[j]){
                        ans = min({i*10+j,j*10+i,ans});
                    }
                }
            }
        }
        return ans;
    }
};
