
class Solution {
public:
    
    vector<int> Weakest(vector<vector<int> >& mat, int k)
    {
        // no of rows;
        int n = mat.size();
        int col = mat[0].size();
        
         set<pair<int,int> > s;
        
        for(int i = 0; i<n; ++i)
        {
           

            int s = 0;
            int e =col-1,mid;
            int a=0;
            
            while(s<=e)
            {
                mid=s+(e-s)/2;
                if(mat[i][mid]==1)
                {
                    a=mid;
                    s=mid+1;
                }
                else
                {
                    e=mid-1;
                }

            }


           s.insert({0,i});
        }
        
        vector<int> ans;
        // first k weakest row is our answer 
        for(auto i : s)
        {
            if(k == 0)
                break;
            ans.push_back(i.second);
            --k;
        }
        
        return ans;
    }
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

        return Weakest(mat,k);
        
    }
	
};
