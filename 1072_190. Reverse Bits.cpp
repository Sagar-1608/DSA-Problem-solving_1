// 190. Reverse Bits

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a = 0;
        int b= 0;

        while(n>0){
            a+=(n%2) << (31-b); 
             //here we calculate the rightmost element 
             //and then by (31-b) times move to left side that is revrrse the num

            n >>= 1; // right shift the main number 

            b++; // for next left is 32--30--29 and so on 
        }
        
        return a;
    }
};
