class Solution {
public:
      
      int t[1001][1001];

     bool checkPalindrom(string &s, int i, int j)
     {
        //  base
         if(i>=j)
         {
             return 1;
         }

         // logic 
         if(s[i]==s[j])
         {
             return t[i][j]=checkPalindrom(s,i+1,j-1);
         }
        return t[i][j]=0;
     }
    string longestPalindrome(string s) {

        // by using recursion and memorization
        // memset(t,-1,sizeof(t));
        // int startPoint=0;
        // int maxlen=INT_MIN;
        // int n=s.length();

        // for(int i =0; i<n;i++)
        // {
        //     for(int j=i; j<n;j++)
        //     {
        //         if(checkPalindrom(s,i,j))
        //         {
        //            if(j-i+1>maxlen)
        //            {
        //                maxlen=j-i+1;
        //                startPoint=i;
        //            }
        //         }
        //     }
        // } 

        // return s.substr(startPoint,maxlen);



         int n = s.size();
        int start = 0, maxLen = 0;
 for( int i=0; i < n;){
  int left = i, right = i;
            
  while (right < n-1 && s[right] == s[right+1]) ++right;
            
  i = right + 1;
            
while ( left > 0 && right < n-1 && s[left-1] == s[right+1]){
                ++right;
                --left;
            }
            if(right-left+1 > maxLen){
                maxLen = right - left + 1;
                start = left;
            }
        }
        return s.substr(start, maxLen);



    }
};
