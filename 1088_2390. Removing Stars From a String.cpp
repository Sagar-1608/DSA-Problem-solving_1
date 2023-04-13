// 2390. Removing Stars From a String
class Solution {
public:
    string removeStars(string s) {
        /*
        deque<char> q;

        for(int i =0; i<s.length();i++)
        {
            char ch = s[i];
            if(ch!='*')
            {
                q.push_back(ch);
                

            }
            else
            {
                q.pop_back();
               
            }
        }

        s.clear();
        while(!q.empty())
        {
            s.push_back(q.front());
            q.pop_front();

        }
        return s;
*/

        // approach 2 without space
        
        //new apprach
        
        .
        int j =0;

        for(int i =0; i<s.length();i++)
        {
            if(s[i]!='*')
            {
                s[j]=s[i];
                j++;
            }
            else
            {
                j--;
            }
        }
        return s.substr(0,j);
        
    }

};
