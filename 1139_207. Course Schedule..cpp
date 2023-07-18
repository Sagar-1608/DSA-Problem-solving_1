// 207. Course Schedule.

class Solution {
public:
   bool isCycleDFS(vector<int> adj[], int u, 
   vector<bool>&visited, vector<bool>& inRecursion) 
   {
        visited[u] = true;
        inRecursion[u] = true;
        
        
        for(int &v : adj[u]) {
            //if not visited, then we check for cycle in DFS
            if(visited[v] == false && isCycleDFS(adj, v, visited, inRecursion))
                return true;
            else if(inRecursion[v] == true)
                return true;
        }
        
        inRecursion[u] = false;
        return false;
        
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        int n =numCourses;

        vector<int> graph[n];

        // create the graph from given condition 

        for(auto x: prerequisites)
        {
            vector<int> data = x;
            int a = data[0];
            int b = data[1];

            graph[a].push_back(b);

        }


       // checking the loop presented in graph
       
        vector<bool> visited(n, false);
        vector<bool> inRecursion(n, false);
        
        for(int i = 0; i<n; i++) {
            if(!visited[i])
            {    
                //loop presented so return false 
                 if(isCycleDFS(graph, i, visited, inRecursion)){
                    return false;
                }

            }
     
        }
        return true;
        
    }
};
