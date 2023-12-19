class Solution {
public:
 vector<vector<int>>  neb ={
             {-1,-1},{-1,0},{-1,1},
             {0,-1},{0,0},{0,1},
             {1,-1},{1,0},{1,1}
         };
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        
        int m = img.size();
        int n = img[0].size();
        
        vector<vector<int>> ans(m,vector<int>(n,0));

        for(int i=0; i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                int sum=0;
                int count=0;
                for(auto p:neb)
                {
                    int _i=i+p[0];
                    int _j=j+p[1];

                    if(_i>=0&& _i<m  && _j>=0 && _j<n)
                    {
                        sum+=img[_i][_j];
                        count++;
                    }
                }

                ans[i][j]=sum/count;

            }
        }



        return ans;
        
    }
};

