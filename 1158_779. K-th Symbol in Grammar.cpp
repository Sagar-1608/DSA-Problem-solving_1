// 779. K-th Symbol in Grammar

class Solution {
public:
    int kthGrammar(int n, int k) {

        // base case 
        if(n==1 && k==1)
        {
            return 0;
        }

        // calculate the length of row 
        int len = pow(2,n-1);
        int mid = len/2;


        // 0
        // 0 1
        // 01 10
        // 0110 1001
        
// k ki value mdi ya mid se km hai 
//to simple return k value of previous row 
// else return !(k-mid) value of previous row
// eg k=2 for row 4 === k=2 in 3 row
//   k=6 for row 4 === !(k-mid)=>(6-4)=>2 that !2 in 3row


        if(k<=mid)
        {
        return kthGrammar(n-1,k);

        }
        else 
        {
            return !kthGrammar(n-1,k-mid);
        }
    
    }
};
