// 2609. Find the Longest Balanced Substring of a Binary Stringclass Solution {
public:
   int findTheLongestBalancedSubstring(string s) {
        int maxi = 0;
        for (int i = 0; i < s.size();) {
            int zeros = 0;
            int ones = 0;
           //calculating zeros
            while (i < s.size() and s[i] == '0') {
                zeros++;
                i++;
            }
//            calculating one
            while (i < s.size() and s[i] == '1') {
                ones++;
                i++;
            }
           
           // calculating current length 
            int len = 2 * min(zeros, ones);
           // update the maxi
            maxi = max(maxi, len);
        }
        return maxi;

   }


};
