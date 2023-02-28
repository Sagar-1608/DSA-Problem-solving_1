// 633. Sum of Square Numbers
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int s=0,e=sqrt(c);
        long long int sqrt=1;
        while(s<=e){
            sqrt=s*s+e*e;
            if(sqrt==c){
                return true;
            }
            else if(sqrt>c){
                e--;
            }
            else{
                s++;
            }
        }
        return false;
    }
};
