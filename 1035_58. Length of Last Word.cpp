// 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {

      int n = s.length()-1;
    //   start from last position of string
    int c=0;
    while(n>=0)
    {
        if(s[n--]!=' ') c++;
        else if(c>0) break;
    }
           return c;
        
    }
};
