// 67. Add Binary
class Solution {
public:
    string addBinary(string a, string b) {


     string ans="";
      int carry=0;
      int i = a.length()-1;
      int j = b.length()-1;
    
    
        while(i >= 0 || j >= 0){
             int sum = carry;

            if(i >= 0){
                sum += a[i] - '0'; // convert into integer 
                i--;
            }
            if(j >= 0){ 
                sum += b[j] - '0';
                j--;
            }

            if(sum>1) //(sum =2 or 3 ) then cary = 1
            {
                carry = 1;
            }
            else
            {

                carry=0;
            }
            char a=sum%2+'0';
            ans.push_back(a); 
            //(if sum = 1 put 1%2=1 if sum = put 2%2=0 and sum = 3 put 3%2=1 )
        }
        if(carry != 0){ 
            ans.push_back(carry+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;


        
    }
};
