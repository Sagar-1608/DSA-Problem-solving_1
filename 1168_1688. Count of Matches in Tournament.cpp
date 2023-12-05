class Solution {
public:
    int numberOfMatches(int n) {
        int matchs=0;
        while(n!=1)
        {

            matchs+=n/2;
            n%2==0?n=n/2:n=n/2+1;
            
        }
        return matchs;
        
    }
};
