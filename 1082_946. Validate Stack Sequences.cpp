class Solution {
public:
    bool validateStackSequences(vector<int>& push, vector<int>& pop) {

        // approach 1

       /* stack<int> s;

        for(int i = 0, j=0; i<push.size(); i++)
        {
            s.push(push[i]);

            while(!s.empty() && s.top()==pop[j])
            {
                j++;
                s.pop();
            }

        }

        return s.empty();
        */


        //approach 2 with out stack 


        int i =0 , j=0;

        for(auto x : push)
        {
            push[i]=x;
            i++;

            while(i>0 && push[i-1]==pop[j])
            {
                j++;
                i--;
            }
        }
        return (i==0);
    }
};
