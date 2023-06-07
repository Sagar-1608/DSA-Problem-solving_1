// 2101. Detonate the Maximum Bombs

class Solution {
public:
void dfs(vector<vector<int>>& gr, vector<bool> & visited, int &c, int &i)
{
    visited[i]=true;
    c++;
    for(int j=0; j<gr[i].size();j++)
    {
        if(!visited[gr[i][j]])
        {
            dfs(gr,visited, c,gr[i][j]);
        }
    }
}


    int maximumDetonation(vector<vector<int>>& bombs) {



        int n = bombs.size();
        vector<vector<int>> gr(n);

        // create connected graph
        for(int i = 0; i<n;i++)
        {

            // gating bombs parameter in x1 y1 and r1
            long long  x1,y1,r1;
            x1 = bombs[i][0];
            y1 = bombs[i][1];
            r1 = bombs[i][2];
            

            // check for every other bomb
            for(int j =0; j<n; j++)
            {
                if(i!=j)  // not check itself
                {
                    long lo x,y;
                    x = abs(x1-bombs[j][0]);
                    y = abs(y1-bombs[j][1]);

                    if(x*x + y*y <= r*r)  // check range of bomb
                    {
                        gr[i].push_back(j);  // create edge i to j

                    }


                }
            }

        }



        int ans =INT_MIN;
        for(int i = 0; i<n; i++)
        {
            int c=0;
            vector<bool> visited(n,false);
            dfs(gr, visited,c,i);
            ans = max(ans,c);
        }
        return ans;





        
    }
};
