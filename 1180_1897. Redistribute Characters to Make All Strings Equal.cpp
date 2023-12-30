// 1897. Redistribute Characters to Make All Strings Equal
class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();

       if(n==1) return true;

       int letter_count=0;
       for(auto i: words)
       {
           letter_count +=i.length();
       }

       if(letter_count%n!=0) return false;

       unordered_map <char,int> mp;
      
       for(auto i: words)
       {
          for(auto j: i)
          {
              mp[j]++;
          }
       }

       for(auto i:mp)
       {
           if(i.second%n!=0) return false;
       }

       return true;
    
    }
};
