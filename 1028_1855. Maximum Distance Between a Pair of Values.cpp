// 1855. Maximum Distance Between a Pair of Values
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int dis=0;
        for (int i=0; i<nums1.size(); i++){
            int low= i+1; int high= nums2.size()-1;// int midi=i;
            
            
//             by using the binary search 
            while (low<=high){
                int mid= low+ (high-low)/2;
                if (nums1[i]>nums2[mid]){
                    high= mid-1;
                }
                else {low= mid+1;}
            }
            dis= max(dis,low-1-i);
        }
        return dis;
    }
};

