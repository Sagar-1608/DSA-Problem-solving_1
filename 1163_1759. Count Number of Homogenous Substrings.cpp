// 1759. Count Number of Homogenous Substrings

class Solution {
public:
  int mod = 1e9 +7;

    int countHomogenous(string s) {

        int res=0;
        int len=0;
        for(int i = 0 ;i<s.length();i++)
        {
            if(i>0 && s[i]==s[i-1])
            {
                len+=1;
            }
            else
            {
                len=1;
            }
            res=(res+len)%mod;

        }
        return res;

    }
    
};
