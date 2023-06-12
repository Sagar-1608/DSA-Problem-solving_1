class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flips = 0;
        
        while (a > 0 || b > 0 || c > 0) {
//calculating the all bits in this steps 
            int bitA = a & 1;
            int bitB = b & 1;
            int bitC = c & 1;

//check bit c is equal to zero 
            if (bitC == 0) {
                flips += (bitA + bitB); 
            } else {
                if (bitA == 0 && bitB == 0) {
                    flips += 1; 
                }
            }
          
  // decrement the the all variable 

            a >>= 1;
            b >>= 1;
            c >>= 1;
        }

        return flips;
    }
};
