class Solution {
public:
   int t [501][501];
   int m,n;
   int solve(vector<int>& nums1, vector<int>& nums2, int i, int j)
   {
       // base case 
       if(i>=m || j>=n)
       {
           return -1e9;
       }

       if(t[i][j]!=-1e9)
       {
           return t[i][j];
       }

       int val = nums1[i]*nums2[j];
       int ij= nums1[i]*nums2[j] + solve(nums1,nums2,i+1,j+1);
       int ionly= solve(nums1,nums2,i+1,j);
       int jonly= solve(nums1,nums2,i,j+1);

       return t[i][j] = max({val,ij,ionly,jonly});
   }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        m=nums1.size();
        n=nums2.size();
        for(int i =0; i<501;i++)
        {
            for(int j=0; j<501;j++)
            {
                t[i][j]=-1e9;
            }
        }
        return solve(nums1,nums2,0,0);
        
    } 
};

// bottom-up approach 
