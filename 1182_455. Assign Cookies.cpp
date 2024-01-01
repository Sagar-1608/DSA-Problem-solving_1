// 455. Assign Cookies
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       if (g.size() == 0 || s.size() == 0)
            return 0;
            
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        int n = g.size();
        int m = s.size();
        
       while(i<n && j<m)
       {
           if(g[i]<=s[j])
           {
               i++;
           }
           j++;
       }
       return i;
       
    }
};
