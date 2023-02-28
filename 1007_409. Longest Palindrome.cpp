// 409. Longest Palindrome
class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map <char,int> mp;

        for(auto i : s )
        {
            mp[i]++;
        }
      int result =0;
      bool odd_is_found=false;
        for(auto i : mp)
        {
            if((i.second)%2==0 )
            {
                result+=i.second;
            }
            else{
                result+= i.second-1;
                odd_is_found=true;
            }

        }

        if(odd_is_found) result++;
        return result;
    }
};
